// problem: 카우버거
// id: 15720
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

  int b, c, d, mn, ans = 0, sum = 0;
  cin >> b >> c >> d;
  vi bv(b), cv(c), dv(d);
  for (auto &i : bv) {
    cin >> i;
    sum += i;
  }
  for (auto &i : cv) {
    cin >> i;
    sum += i;
  }
  for (auto &i : dv) {
    cin >> i;
    sum += i;
  }
  sort(bv.begin(), bv.end(), greater<>());
  sort(cv.begin(), cv.end(), greater<>());
  sort(dv.begin(), dv.end(), greater<>());
  mn = min(b, min(c, d));
  for (int i = 0; i < mn; i++) {
    int t = bv[i] + cv[i] + dv[i];
    t *= 9;
    t /= 10;
    ans += t;
  }

  for (int i = mn; i < b; i++) {
    ans += bv[i];
  }
  for (int i = mn; i < c; i++) {
    ans += cv[i];
  }
  for (int i = mn; i < d; i++) {
    ans += dv[i];
  }

  cout << sum << '\n';
  cout << ans << '\n';

  return 0;
}
