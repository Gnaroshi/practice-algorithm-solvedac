// problem: 줄자접기
// id: 2597
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

  double n, r1, r2, b1, b2, y1, y2, rp, bp, yp;

  cin >> n >> r1 >> r2 >> b1 >> b2 >> y1 >> y2;

  if (r1 != r2) {
    rp = (r1 + r2) / 2;
    b1 = abs(rp - b1);
    b2 = abs(rp - b2);
    y1 = abs(rp - y1);
    y2 = abs(rp - y2);

    n = max(n - rp, rp);
  }

  if (b1 != b2) {
    bp = (b1 + b2) / 2;
    y1 = abs(bp - y1);
    y2 = abs(bp - y2);

    n = max(n - bp, bp);
  }

  if (y1 != y2) {
    yp = (y1 + y2) / 2;

    n = max(n - yp, yp);
  }

  cout << fixed;
  cout.precision(1);
  cout << n << '\n';

  return 0;
}
