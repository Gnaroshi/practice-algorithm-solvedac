// problem: CD
// id: 4158
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

  int n, m;
  while (true) {
    cin >> n >> m;
    if (n + m == 0)
      break;

    int ans = 0, t, cur = 0;
    vi a(n);
    for (auto &i : a) {
      cin >> i;
    }

    for (int i = 0; i < m; i++) {
      cin >> t;
      int l = 0, r = n - 1, m = n / 2;
      while (l <= r) {
        if (a[m] == t) {
          ans++;
          break;
        } else if (a[m] < t) {
          l = m + 1;
        } else if (a[m] > t) {
          r = m - 1;
        }
        m = (l + r) / 2;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
