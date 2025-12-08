// problem: 걷기
// id: 1459
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

  ll x, y, w, s, ta, tb;
  cin >> x >> y >> w >> s;

  ta = (x + y) * w;
  ll diff = abs(x - y);
  tb = min(x, y) * s;
  if (diff % 2 == 1) {
    tb += min(diff * w, (abs(x - y) - 1) * s + w);
  } else {
    tb += min(diff * w, abs(x - y) * s);
  }
  cout << min(ta, tb) << '\n';

  return 0;
}
