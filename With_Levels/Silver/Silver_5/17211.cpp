// problem: 좋은 날 싫은 날
// id: 17211
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

  int n, c;
  double gg, gb, bg, bb, g, b;
  cin >> n >> c >> gg >> gb >> bg >> bb;
  vd gv(n + 2), bv(n + 2);
  if (c == 0) {
    gv[0] = gg;
    bv[0] = gb;
  } else {
    gv[0] = bg;
    bv[0] = bb;
  }

  gv[0] *= 1000.0;
  bv[0] *= 1000.0;

  for (int i = 1; i < n; i++) {
    gv[i] = gv[i - 1] * gg + bv[i - 1] * bg;
    bv[i] = gv[i - 1] * gb + bv[i - 1] * bb;
  }
  // cout << fixed;
  // cout.precision(0);
  cout << round(gv[n - 1]) << '\n';
  cout << round(bv[n - 1]) << '\n';

  return 0;
}
