// problem: 로봇
// id: 13567
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

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n, cx = 0, cy = 0, dir = 0, a, nx, ny;
  cin >> m >> n;
  string op;
  bool chk = true;
  for (int i = 0; i < n; i++) {
    cin >> op >> a;
    if (chk) {
      if (op[0] == 'M') {
        nx = cx + dx[dir] * a;
        ny = cy + dy[dir] * a;
        if (nx < 0 || nx > m || ny < 0 || ny > m) {
          chk = false;
          continue;
        }
        cx = nx;
        cy = ny;

      } else {
        if (a == 0) {
          dir++;
        } else {
          dir--;
        }
        dir += 4;
        dir %= 4;
      }
    }
  }

  if (chk) {
    cout << cy << ' ' << cx << '\n';
  } else {
    cout << "-1\n";
  }

  return 0;
}
