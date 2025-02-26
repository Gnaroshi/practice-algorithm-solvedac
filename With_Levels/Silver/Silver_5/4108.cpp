// problem: 지뢰찾기
// id: 4108
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

  int n, m, cnt, cx, cy;
  int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
  int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
  while (true) {
    cin >> n >> m;
    if (n + m == 0)
      break;
    vs v(n), ans(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      ans[i] = v[i];
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (v[i][j] == '.') {
          cnt = 0;
          for (int dir = 0; dir < 8; dir++) {
            cx = i, cy = j;
            cx += dx[dir];
            cy += dy[dir];
            if (cx < 0 || cx >= n || cy < 0 || cy >= m)
              continue;
            if (v[cx][cy] == '*')
              cnt++;
          }
          ans[i][j] = char('0' + cnt);
        }
      }
    }

    for (auto &i : ans)
      cout << i << '\n';
  }

  return 0;
}
