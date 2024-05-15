// problem: 수 이어 쓰기
// id: 1515
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;
  cin >> s;

  int ans = 0, loc = 0, iter = s.length();
  while (true) {
    t = to_string(++ans);
    for (auto i : t) {
      if (s[loc] == i) {
        loc++;
      }
      if (loc == iter) {
        cout << ans;
        return 0;
      }
    }
  }

  return 0;
}
