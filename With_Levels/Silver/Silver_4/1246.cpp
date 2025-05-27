// problem: 온라인 판매
// id: 1246
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

  int n, m, p, l = 0, mx = 0, mxp = 0, mnp = 0, ans = 0;
  cin >> n >> m;
  vi v(m);
  for (auto &i : v) {
    cin >> i;
    mxp = max(i, mxp);
  }

  sort(v.begin(), v.end());
  mnp = v.front();
  l = max(0, m - min(n, m));

  for (int i = mnp; i <= mxp; i++) {
    for (int j = l; j < m; j++) {
      if (v[j] >= i) {
        l = j;
        break;
      }
    }
    p = i * (m - l);
    if (mx < p && (m - l) <= n) {
      mx = p;
      ans = i;
    }
  }

  cout << ans << ' ' << mx << '\n';

  return 0;
}
