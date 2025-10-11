#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;

    // 각 이벤트(캠프파이어)의 참석자 목록 저장
    vector<vector<int>> events(e);
    // 1번 참가자가 아는 노래(참석한 이벤트 ID) 목록
    set<int> p1_songs;

    for (int i = 0; i < e; i++) {
        int k;
        cin >> k;
        events[i].resize(k);
        bool p1_is_present = false;
        for (int j = 0; j < k; j++) {
            cin >> events[i][j];
            if (events[i][j] == 1) {
                p1_is_present = true;
            }
        }
        // 1번이 참석했다면, 해당 이벤트 ID가 '노래'가 됨
        if (p1_is_present) {
            p1_songs.insert(i);
        }
    }

    // 각 사람이 아는 노래 목록
    vector<set<int>> person_songs(n + 1);

    // 노래 전파 시뮬레이션
    // 한 번의 순회에서 노래 정보가 바뀌었다면, 추가 전파 가능성이 있으므로 반복
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 0; i < e; i++) { // 모든 이벤트를 순회
            // 이번 이벤트에 참석한 모든 사람이 아는 노래의 합집합
            set<int> union_of_songs;
            for (int person : events[i]) {
                union_of_songs.insert(person_songs[person].begin(), person_songs[person].end());
            }
            
            // 1번이 참석한 이벤트라면, 해당 노래를 합집합에 추가
            if (p1_songs.count(i)) {
                union_of_songs.insert(i);
            }

            // 이벤트 참석자들에게 합집합의 모든 노래를 전파
            for (int person : events[i]) {
                size_t before_size = person_songs[person].size();
                person_songs[person].insert(union_of_songs.begin(), union_of_songs.end());
                // 노래를 새로 배웠다면 changed 플래그를 true로 설정
                if (person_songs[person].size() > before_size) {
                    changed = true;
                }
            }
        }
    }

    vector<int> result;
    for (int i = 1; i <= n; i++) {
        // 1번이 아는 모든 노래를 i번 사람도 아는지 확인
        bool knows_all = true;
        for (int song_id : p1_songs) {
            if (person_songs[i].find(song_id) == person_songs[i].end()) {
                knows_all = false;
                break;
            }
        }
        if (knows_all) {
            result.push_back(i);
        }
    }

    sort(result.begin(), result.end());

    for (int person : result) {
        cout << person << '\n';
    }

    return 0;
}
