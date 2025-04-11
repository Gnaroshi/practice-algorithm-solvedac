// problem: 평행사변형
// id: 1064
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

struct P {
  double x, y;
};

double grad(P a, P b) {
  if (a.x == b.x)
    return 0x3f3f3f3f;
  return (a.y - b.y) / (a.x - b.x);
}

double dist(P a, P b) {
  return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  P a, b, c;
  cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

  double ga = grad(a, b), gb = grad(b, c);
  if (ga == gb) {
    cout << -1.0 << "\n";
    return 0;
  }

  vd d(3);
  d[0] = dist(a, b);
  d[1] = dist(b, c);
  d[2] = dist(c, a);

  for (auto &i : d) {
    i = sqrt(i);
  }

  sort(d.begin(), d.end());

  cout << fixed;
  cout.precision(11);
  cout << (d.back() - d.front()) * 2 << '\n';

  return 0;
}
