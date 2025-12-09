// problem: 늑대와 양
// id: 16956
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

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int r, c, nx, ny;
  cin >> r >> c;
  vs v(r);

  for (auto &i : v) {
    cin >> i;
  }

  bool chk = false;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (v[i][j] == 'W') {
        for (int dir = 0; dir < 4; dir++) {
          nx = i + dx[dir];
          ny = j + dy[dir];
          if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
            continue;
          }
          if (v[nx][ny] == 'S') {
            chk = true;
            break;
          }
        }
      }
      if (chk) {
        break;
      }
    }
    if (chk) {
      break;
    }
  }

  if (chk) {
    cout << 0 << '\n';
  } else {
    cout << 1 << '\n';
    for (auto i : v) {
      for (auto j : i) {
        if (j == '.') {
          cout << 'D';
        } else {
          cout << j;
        }
      }
      cout << '\n';
    }
  }

  return 0;
}
