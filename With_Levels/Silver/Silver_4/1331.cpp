// problem: 나이트 투어
// id: 1331
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

  int input_iter = 36, x, y, nx, ny, bx, by, sx, sy;
  int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
  int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
  string t;
  vvi v(6, vi(6, 0));
  bool chk = true;
  cin >> t;
  sx = bx = t[0] - 'A';
  sy = by = t[1] - '1';
  if (bx < 0 || bx >= 6 || by < 0 || by >= 6) {
    chk = false;
  } else {
    v[bx][by] = 1;
  }

  for (int i = 1; i < 36; i++) {
    cin >> t;
    if (!chk) {
      continue;
    }
    x = t[0] - 'A';
    y = t[1] - '1';

    if (v[x][y] == 1) {
      chk = false;
    } else {
      bool tchk = false;
      for (int dir = 0; dir < 8; dir++) {
        nx = bx + dx[dir];
        ny = by + dy[dir];
        if (nx < 0 || nx >= 6 || ny < 0 || ny >= 6) {
          continue;
        } else if (nx == x && ny == y) {
          tchk = true;
          break;
        }
      }
      if (!tchk) {
        chk = false;
      } else {
        v[x][y] = 1;
      }
    }
    bx = x;
    by = y;
  }

  bool tchk = false;
  for (int dir = 0; dir < 8; dir++) {
    nx = bx + dx[dir];
    ny = by + dy[dir];
    if (nx < 0 || nx >= 6 || ny < 0 || ny >= 6) {
      continue;
    } else if (nx == sx && ny == sy) {
      tchk = true;
      break;
    }
  }
  if (!tchk) {
    chk = false;
  }

  cout << (chk ? "Valid" : "Invalid") << '\n';

  return 0;
}
