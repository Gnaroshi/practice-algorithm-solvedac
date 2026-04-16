// problem: 엠비티아이
// id: 24725
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

int n, m, ans, cx, cy, nx, ny;
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
map<string, bool> mp;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  vs v(n);
  for (auto &i : v) {
    cin >> i;
  }
  vs mbti = {"EI", "NS", "FT", "PJ"};

  for (int dir = 0; dir < 8; dir++) {
    cx = dx[dir], cy = dy[dir];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        bool chk = true;
        if (v[i][j] == 'E' || v[i][j] == 'I') {
          for (int k = 1; k < 4; k++) {
            nx = i + cx * k, ny = j + cy * k;
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
              chk = false;
              break;
            }
            if (v[nx][ny] == mbti[k][0] || v[nx][ny] == mbti[k][1]) {
              continue;
            } else {
              chk = false;
              break;
            }
          }
        } else {
          chk = false;
        }

        if (chk) {
          ans++;
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
