// problem: 순열 사이클
// id: 10451
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
    int n, t, ans = 0, cur;
    cin >> n;
    vi a(n + 1), b(n + 1);
    vb chk(n + 1, true);

    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
      if (chk[i]) {
        cur = a[i];
        while (true) {
          chk[cur] = false;
          if (a[cur] == i) {
            ans++;
            break;
          }
          cur = a[cur];
        }
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
