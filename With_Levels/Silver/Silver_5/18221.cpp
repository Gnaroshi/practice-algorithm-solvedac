// problem: 교수님 저는 취업할래요
// id: 18221
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

  int n, px, py, sx, sy;
  cin >> n;
  vvi v(n, vi(n, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
      if (v[i][j] == 2) {
        sx = i, sy = j;
      } else if (v[i][j] == 5) {
        px = i, py = j;
      }
    }
  }

  double dist = sqrt(double(((px - sx) * (px - sx)) + ((py - sy) * (py - sy))));
  bool chk = true;
  int mnx = min(px, sx);
  int mny = min(py, sy);
  int mxx = max(px, sx);
  int mxy = max(py, sy);
  int cnt = 0;
  if (dist >= 5.0) {
    for (int i = mnx; i <= mxx; i++) {
      for (int j = mny; j <= mxy; j++) {
        if (v[i][j] == 1) {
          cnt++;
        }
      }
    }

    if (cnt < 3) {
      chk = false;
    }
  } else {
    chk = false;
  }

  cout << chk << '\n';

  return 0;
}
