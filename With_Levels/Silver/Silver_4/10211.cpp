// problem: Maximum Subarray
// id: 10211
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
    int n, t, ans = -0x3f3f3f3f;
    cin >> n;
    vi v, dp(n + 1, 0);
    v.push_back(0);
    for (int i = 0; i < n; i++) {
      cin >> t;
      v.push_back(t);
    }

    for (int i = 1; i <= n; i++) {
      dp[i] = max(v[i] + dp[i - 1], v[i]);
      ans = max(ans, dp[i]);
    }

    cout << ans << '\n';
  }

  return 0;
}
