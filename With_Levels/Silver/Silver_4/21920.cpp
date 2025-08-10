// problem: 서로소 평균
// id: 21920
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

  int n, x;
  cin >> n;
  double ans = 0, cnt = 0;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }
  cin >> x;
  for (auto i : v) {
    if (gcd(x, i) == 1) {
      ans += i;
      cnt++;
    }
  }

  cout << fixed;
  cout.precision(10);
  cout << ans / cnt << '\n';

  return 0;
}
