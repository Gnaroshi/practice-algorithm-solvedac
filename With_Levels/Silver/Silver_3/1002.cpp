// problem: 터렛
// id: 1002
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

  int tc, ans;
  cin >> tc;
  while (tc--) {
    double a1, b1, c1, a2, b2, c2, dis, dif, sm;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    dis = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
    dif = abs(c1 - c2);
    sm = c1 + c2;

    if (dis == 0 && dif == 0) {
      ans = -1;
    } else if (dis < sm && dif < dis) {
      ans = 2;
    } else if (dis == sm || dis == dif) {
      ans = 1;
    } else {
      ans = 0;
    }

    cout << ans << '\n';
  }

  return 0;
}
