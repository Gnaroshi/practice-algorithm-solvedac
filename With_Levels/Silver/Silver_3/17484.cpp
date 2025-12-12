// problem: 진우의 달 여행(Small)
// id: 17484
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using vs = vector<string>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  const int SZ = 7;
  int dx = -1;
  int dy[3] = {1, 0, -1};
  int nx, ny, n, m;

  cin >> n >> m;
  vvi v(n, vi(m));
  int dp[SZ][SZ][3];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < 3; k++) {
        dp[i][j][k] = 0x3f3f3f3f;
      }
    }
  }

  for (auto &i : v) {
    for (auto &j : i) {
      cin >> j;
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 3; j++) {
      dp[0][i][j] = v[0][i];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      nx = i + dx;
      for (int k = 0; k < 3; k++) {
        ny = j + dy[k];

        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
          continue;
        }

        for (int l = 0; l < 3; l++) {
          if (k != l) {
            dp[i][j][k] = min(dp[i][j][k], dp[nx][ny][l] + v[i][j]);
          }
        }
      }
    }
  }

  int ans = 0x3f3f3f3f;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 3; j++) {
      ans = min(ans, dp[n - 1][i][j]);
    }
  }

  cout << ans << '\n';

  return 0;
}
