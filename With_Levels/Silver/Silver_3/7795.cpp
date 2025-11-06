// problem: 먹을 것인가 먹힐 것인가
// id: 7795
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, ans = 0, t;
    cin >> n >> m;
    vi a(n), b(m);
    for (auto &i : a) {
      cin >> i;
    }
    for (auto &i : b) {
      cin >> i;
    }

    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
      t = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
      ans += t;
    }

    cout << ans << "\n";
  }

  return 0;
}
