// problem: 내접사각형 만들기
// id: 17177
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
using ll = long long;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;

  int t = ((b * b) * (c * c)) - ((a * a) * (b * b + c * c - a * a));
  if (t < 0) {
    cout << -1 << '\n';
    return 0;
  }

  double dt = ((sqrt(t) - (b * c)) / (a));
  if (dt < 0) {
    cout << -1 << '\n';
    return 0;
  }

  cout << (int(dt + 0.001)) << '\n';

  return 0;
}
