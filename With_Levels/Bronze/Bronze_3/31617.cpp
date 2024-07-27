// problem: 差 (Difference)
// id: 31617
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

  int k, n, m, t, ans = 0;
  vi chk(300, 0);
  cin >> k >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    chk[t + k]++;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> t;
    if (chk[t])
      ans += chk[t];
  }

  cout << ans << '\n';

  return 0;
}
