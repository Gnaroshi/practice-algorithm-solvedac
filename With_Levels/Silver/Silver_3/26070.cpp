// problem: 곰곰이와 학식
// id: 26070
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

ll fn(ll a, ll b, ll c, ll x, ll y, ll z) {
  ll ret = 0, m;
  m = min(a, x);
  ret += m;
  x -= m;
  y += x / 3;

  m = min(b, y);
  ret += m;
  y -= m;
  z += y / 3;

  m = min(c, z);
  ret += m;

  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll a, b, c, x, y, z, ans = 0;
  cin >> a >> b >> c >> x >> y >> z;

  ans = fn(a, b, c, x, y, z);
  ans = max(ans, fn(b, c, a, y, z, x));
  ans = max(ans, fn(c, a, b, z, x, y));

  cout << ans << '\n';

  return 0;
}
