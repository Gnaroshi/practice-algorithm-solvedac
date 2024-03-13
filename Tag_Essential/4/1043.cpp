#include <bits/stdc++.h>
using namespace std;

int n, m;
int know_truth_cnt;
int know_truth[100];
vector<int> v[100];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> know_truth_cnt;
    //진실을 알고 있는 사람 입력
    for (int i = 0; i < know_truth_cnt; i++)
    {
        int temp;
        cin >> temp;
        know_truth[temp] = 1;
    }
    // party를 받음, 처음은 party의 사람의 수, 뒤에는 사람들
    for (int i = 0; i < m; i++)
    {
        int cnt;
        cin >> cnt;

        int temp_party[100];
        bool isExist = false;
        for (int j = 0; j < cnt; j++)
        {
            cin >> temp_party[j];
            v[i].push_back(temp_party[j]);
            if (know_truth[temp_party[j]] == 1)
                isExist = true;
        }

        if (isExist)
        {
            for (int j = 0; j < cnt; j++)
            {
                know_truth[temp_party[j]] = 1;
            }
        }

        for (int j = 0; j < i; j++)
        {
            bool isFound = false;
            int unknow_cnt = 0;
            for (auto v_temp : v[j])
            {
                if (know_truth[v_temp] == 1)
                {
                    isFound = true;
                }
                else
                    unknow_cnt++;
            }
            if (isFound && unknow_cnt != 0)
            {
                for (auto v_temp : v[j])
                    know_truth[v_temp] = 1;
                j = 0;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        bool isOk = true;
        for (auto t : v[i])
        {
            if (know_truth[t] == 1)
            {
                isOk = false;
                break;
            }
        }
        if (isOk)
            ans++;
    }
    cout << ans << '\n';

    return 0;
}