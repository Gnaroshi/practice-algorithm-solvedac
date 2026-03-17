// problem: 두 개의 배열
// id: 17124
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, t1, t2;
    ll ans = 0;
    cin >> n >> m;
    vll a(n), b(m);
    for (auto &i : a) {
      cin >> i;
    }
    for (auto &i : b) {
      cin >> i;
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
      auto loc = lower_bound(b.begin(), b.end(), a[i]);
      if (loc == b.begin()) {
        ans += *loc;
      } else if (loc == b.end()) {
        ans += *(loc - 1);
      } else {
        t1 = *(loc - 1), t2 = *loc;
        if (abs(t1 - a[i]) <= abs(t2 - a[i])) {
          ans += t1;
        } else {
          ans += t2;
        }
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
