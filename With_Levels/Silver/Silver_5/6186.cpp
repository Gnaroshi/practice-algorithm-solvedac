// problem: Best Grass
// id: 6186
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

  int n, m, cur = 1;
  cin >> n >> m;
  vs v(n);
  vvi mp(n, vi(m, 0));
  for (auto &i : v) {
    cin >> i;
  }

  int dx[4] = {0, -1, 0, 1};
  int dy[4] = {1, 0, -1, 0};
  int cx, cy, nx, ny;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '#' && mp[i][j] == 0) {
        stack<pair<int, int>> stk;
        stk.push({i, j});
        while (!stk.empty()) {
          tie(cx, cy) = stk.top();
          mp[cx][cy] = cur;
          stk.pop();

          for (int dir = 0; dir < 4; dir++) {
            nx = cx + dx[dir];
            ny = cy + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
              continue;
            }

            if (mp[nx][ny] != 0 || v[nx][ny] != '#') {
              continue;
            }

            stk.push({nx, ny});
          }
        }
        cur++;
      }
    }
  }

  // for (auto &i : v) {
  //   cout << i << '\n';
  // }
  // cout << "-------------------------------\n";
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << mp[i][j] << (j != m - 1 ? ' ' : '\n');
  //   }
  // }

  cout << cur - 1 << '\n';

  return 0;
}
