// problem: 네모네모 시력검사
// id: 18242
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

  int n, m;
  cin >> n >> m;
  int dx[4] = {0, -1, 0, 1};
  int dy[4] = {1, 0, -1, 0};
  string ds[4] = {"RIGHT", "UP", "LEFT", "DOWN"};
  vs v(n);
  for (auto &i : v) {
    cin >> i;
  }

  bool chk = false;
  int ltx, lty, rtx, rty;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '#') {
        if (!chk) {
          chk = true;
          ltx = i, lty = j;
          rtx = i, rty = j;
        } else {
          rty = max(rty, j);
        }
      }
    }
    if (chk) {
      break;
    }
  }

  int d = (rty - lty) / 2;
  int mdx = ltx + d, mdy = lty + d;
  for (int dir = 0; dir < 4; dir++) {
    int nx = mdx + dx[dir] * d;
    int ny = mdy + dy[dir] * d;
    if (v[nx][ny] != '#') {
      cout << ds[dir] << '\n';
      return 0;
    }
  }

  return 0;
}
