// problem: 삼각형
// id: 1925
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

  vd v(3);
  vector<pair<double, double>> vp(3);
  const double GP = 1e-9;
  for (auto &i : vp) {
    cin >> i.first >> i.second;
  }

  for (int i = 0; i < 3; i++) {
    double a, b;
    a = vp[i].first - vp[(i + 1) % 3].first;
    b = vp[i].second - vp[(i + 1) % 3].second;
    if (fabs(a) < GP) {
      v[i] = INFINITY;
    } else {
      v[i] = b / a;
    }
  }

  sort(v.begin(), v.end());

  if (fabs(v[0] - v[1]) < GP && fabs(v[1] - v[2]) < GP) {
    cout << "X\n";
    return 0;
  }

  for (int i = 0; i < 3; i++) {
    double a, b;
    a = vp[i].first - vp[(i + 1) % 3].first;
    b = vp[i].second - vp[(i + 1) % 3].second;
    v[i] = sqrt((a * a) + (b * b));
  }

  sort(v.begin(), v.end());

  double l = v[0] * v[0] + v[1] * v[1];
  double r = v[2] * v[2];
  if (fabs(v[0] - v[1]) < GP && fabs(v[1] - v[2]) < GP) {
    cout << "Jung";
  } else {
    if (fabs(l - r) < GP) {
      cout << "Jikkak";
    } else if (l < r) {
      cout << "Dunkak";
    } else {
      cout << "Yeahkak";
    }
    if (fabs(v[0] - v[1]) < GP || fabs(v[1] - v[2]) < GP ||
        fabs(v[0] - v[2]) < GP) {
      cout << "2";
    }
  }
  cout << "Triangle\n";

  return 0;
}
