// problem: 하키
// id: 1358
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

int ans = 0;
double w, h, x, y, p, r, a, b;

int fn(double a, double b) {
  if (x <= a && a <= x + w) {
    if (y <= b && b <= y + h) {
      return 1;
    }
  }

  if ((a - x) * (a - x) + (b - (y + r)) * (b - (y + r)) <= r * r) {
    return 1;
  }
  if ((a - (x + w)) * (a - (x + w)) + (b - (y + r)) * (b - (y + r)) <= r * r) {
    return 1;
  }

  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> w >> h >> x >> y >> p;
  r = h / 2.0;

  for (int i = 0; i < p; i++) {
    cin >> a >> b;
    ans += fn(a, b);
  }

  cout << ans << '\n';

  return 0;
}
