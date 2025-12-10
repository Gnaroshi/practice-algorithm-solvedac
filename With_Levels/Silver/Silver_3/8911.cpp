// problem: 거북이
// id: 8911
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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int cx = 0, cy = 0, nx, ny, dir = 0, mxx = 0, mnx = 0, mxy = 0, mny = 0;
    string s;
    cin >> s;
    for (auto i : s) {
      if (i == 'F') {
        cx += dx[dir];
        cy += dy[dir];
      } else if (i == 'B') {
        cx -= dx[dir];
        cy -= dy[dir];
      } else if (i == 'L') {
        dir++;
      } else if (i == 'R') {
        dir--;
      }
      if (dir < 0) {
        dir += 4;
      } else if (dir > 3) {
        dir -= 4;
      }

      if (i == 'F' || i == 'B') {
        mxx = max(mxx, cx);
        mnx = min(mnx, cx);
        mxy = max(mxy, cy);
        mny = min(mny, cy);
      }
    }

    cout << (mxx - mnx) * (mxy - mny) << '\n';
  }

  return 0;
}
