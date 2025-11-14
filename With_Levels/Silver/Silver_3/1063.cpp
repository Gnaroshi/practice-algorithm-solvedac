// problem: 킹
// id: 1063
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

  map<string, pair<int, int>> mp;
  mp["R"] = {1, 0};
  mp["L"] = {-1, 0};
  mp["B"] = {0, -1};
  mp["T"] = {0, 1};
  mp["RT"] = {1, 1};
  mp["LT"] = {-1, 1};
  mp["RB"] = {1, -1};
  mp["LB"] = {-1, -1};

  int n, kx, ky, rx, ry, nx, ny, cx, cy;
  string k, r;

  cin >> k >> r >> n;
  kx = k[0] - 'A', ky = k[1] - '1';
  rx = r[0] - 'A', ry = r[1] - '1';

  for (int i = 0; i < n; i++) {
    cin >> k;
    nx = mp[k].first;
    ny = mp[k].second;

    // cout << "NX: " << nx << ' ' << " | NY: " << ny << '\n';
    if ((kx + nx < 0) || (ky + ny < 0) || (kx + nx > 7) || (ky + ny > 7)) {
    } else {
      cx = kx + nx;
      cy = ky + ny;

      if (cx == rx && cy == ry) {
        if ((rx + nx < 0) || (ry + ny < 0) || (rx + nx > 7) || (ry + ny > 7)) {
          continue;
        } else {
          rx += nx;
          ry += ny;
          kx = cx;
          ky = cy;
        }
      } else {
        kx += nx;
        ky += ny;
      }
    }
  }

  cout << char(kx + 'A') << ky + 1 << '\n';
  cout << char(rx + 'A') << ry + 1 << '\n';

  return 0;
}
