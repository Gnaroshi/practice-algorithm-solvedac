// problem: 선물
// id: 1166
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

  double n, l, w, h, s, e, md, ans = 0;
  ll t;
  cin >> n >> l >> w >> h;
  e = min(min(l, w), h);

  for (int i = 0; i < 100; i++) {
    md = (s + e) / 2;
    t = floor(l / md) * floor(w / md) * floor(h / md);
    if (n <= t) {
      ans = md;
      s = md;
    } else {
      e = md;
    }
  }

  cout << fixed;
  cout.precision(11);
  cout << ans << '\n';

  return 0;
}
