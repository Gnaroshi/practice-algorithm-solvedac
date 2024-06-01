// problem: 튕기는 볼링공
// id: 1876
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

double br = 20.0, w = 105.0, pr = 12.0;

bool fn(double t, double x) {
  double mn, mx, theta, col, alp;
  double l = 0;
  theta = M_PI * x / 180.0;
  alp = (br + pr) / 2.0 / sin(theta);
  mn = t - alp;
  mx = t + alp;
  col = (w - br) / tan(theta);
  while (l < mx) {
    if (mn < l && l < mx)
      return true;
    l += col;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    double t, x;
    cin >> t >> x;
    cout << (fn(100.0 * t, x) ? "yes" : "no") << '\n';
  }

  return 0;
}
