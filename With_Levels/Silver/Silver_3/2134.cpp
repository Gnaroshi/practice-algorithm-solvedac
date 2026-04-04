// problem: 창고 이전
// id: 2134
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

  int n, m, k;
  ll ans = 0, tota, totb, tot;
  cin >> n >> m >> k;
  tota = totb = 0;

  vi a(n + 1), b(m + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    tota += a[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> b[i];
    totb += b[i];
  }

  tot = min(tota, totb);
  tota = totb = tot;

  for (ll i = 1; tota > 0; i++) {
    if (a[i] <= tota) {
      ans += i * a[i];
      tota -= a[i];
    } else {
      ans += i * tota;
      break;
    }
  }

  for (ll i = 1; totb > 0; i++) {
    if (b[i] <= totb) {
      ans += i * b[i];
      totb -= b[i];
    } else {
      ans += i * totb;
      break;
    }
  }

  cout << tot << ' ' << ans << '\n';

  return 0;
}
