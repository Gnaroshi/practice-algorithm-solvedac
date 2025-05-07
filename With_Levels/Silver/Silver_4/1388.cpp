// problem: 바닥 장식
// id: 1388
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
#include <tuple>
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
using vvb = vector<vb>;
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

  int n, m, ans = 0;
  cin >> n >> m;
  vs v(n);
  vvb chk(n, vb(m, true));

  for (auto &i : v) {
    cin >> i;
  }

  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int cx, cy;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (chk[i][j]) {
        ans++;
        char cur = v[i][j];
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty()) {
          tie(cx, cy) = q.front();
          q.pop();
          if (cx < 0 || cx >= n || cy < 0 || cy >= m) {
            continue;
          }
          if (v[cx][cy] != cur || chk[cx][cy] == false) {
            continue;
          }
          chk[cx][cy] = false;
          if (cur == '-') {
            q.push({cx, cy + 1});
          } else {
            q.push({cx + 1, cy});
          }
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
