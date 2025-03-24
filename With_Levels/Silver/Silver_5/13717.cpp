// problem: 포켓몬 GO
// id: 13717
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

  int n, ans = 0, k, m, t, tot, mx = -1, mxl = 0;
  cin >> n;
  vs v(n);
  string s;

  for (int i = 0; i < n; i++) {
    cin >> s >> k >> m;
    tot = 0;
    while (m >= k) {
      t = m / k;
      m %= k;
      m += t * 2;
      tot += t;
    }
    ans += tot;
    // cout << t << ' ' << ans << '\n';
    v[i] = s;
    if (mx < tot) {
      mx = tot;
      mxl = i;
    }
  }

  cout << ans << '\n';
  cout << v[mxl] << '\n';

  return 0;
}
