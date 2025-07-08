// problem: 캠프가는 영식
// id: 1590
// tag:
// time taken:

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdint>
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

  int n, t, ans = INT_MAX, a, b, c;
  bool fnd = false;
  cin >> n >> t;

  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    if (a >= t) {
      ans = min(ans, a - t);
      fnd = true;
    }
    for (int j = 1; j < c; j++) {
      a += b;
      if (a >= t) {
        ans = min(ans, a - t);
        fnd = true;
        break;
      }
    }
  }

  if (fnd) {
    cout << ans << "\n";
  } else {
    cout << "-1\n";
  }

  return 0;
}
