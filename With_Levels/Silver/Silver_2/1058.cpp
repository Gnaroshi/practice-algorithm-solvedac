// problem: 친구
// id: 1058
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> v(n);
  for (auto &i : v)
    cin >> i;

  vector<vector<bool>> chk(n, vector<bool>(n, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (j == k)
          continue;
        if (v[j][k] == 'Y' || (v[j][i] == v[i][k] && v[j][i] == 'Y'))
          chk[j][k] = true;
      }
    }
  }
  int ans = 0, t;
  for (int i = 0; i < n; i++) {
    t = 0;
    for (int j = 0; j < n; j++)
      if (chk[i][j])
        t++;
    ans = max(ans, t);
  }
  cout << ans << '\n';

  return 0;
}
