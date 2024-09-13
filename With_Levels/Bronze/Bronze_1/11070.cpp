// problem: 피타고라스 기댓값
// id: 11070
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    ll a, b, p, q, mx = 0, mn = 0x3f3f3f3f;
    vll w(n + 1, 0), l(n + 1, 0);
    for (int i = 0; i < m; i++) {
      cin >> a >> b >> p >> q;
      w[a] += p;
      l[b] += p;
      l[a] += q;
      w[b] += q;
    }
    for (int i = 1; i <= n; i++) {
      if (w[i] == 0 && l[i] == 0) {
        mx = max(mx, 0LL);
        mn = min(mn, 0LL);
      } else {
        double t = (w[i] * w[i] * 1000LL) / (w[i] * w[i] + l[i] * l[i]);
        mx = max(mx, ll(t));
        mn = min(mn, ll(t));
      }
    }
    cout << mx << '\n';
    cout << mn << '\n';
  }

  return 0;
}
