// problem: 세 수 고르기
// id: 1503
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

int n, m, ans, t;
bool s[1001];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> t;
    s[t] = 1;
  }

  ans = (int)1e9;

  for (int x = 1; x <= 1000; x++) {
    if (s[x] == 1)
      continue;
    for (int y = x; y <= 1000; y++) {
      if (s[y] == 1)
        continue;
      t = x * y;
      for (int z = y; z <= 1001; z++) {
        if (s[z] == 1)
          continue;
        ans = min(abs(n - t * z), ans);
      }
    }
  }

  cout << ans;

  return 0;
}
