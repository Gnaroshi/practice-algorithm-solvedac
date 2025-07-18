// problem: The Game of Death
// id: 11558
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
    int n;
    cin >> n;
    vi v(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
    }

    vb chk(n + 1, false);
    int ans = 0, cur = 1, nxt;
    chk[cur] = true;
    for (int i = 1;; i++) {
      nxt = v[cur];
      if (nxt == n) {
        ans = i;
        break;
      }
      if (chk[nxt]) {
        break;
      }
      chk[nxt] = true;
      cur = nxt;
    }
    cout << ans << "\n";
  }

  return 0;
}
