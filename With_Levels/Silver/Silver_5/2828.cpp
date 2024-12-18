// problem: 사과 담기 게임
// id: 2828
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

  int n, m, a, t, ans = 0;
  cin >> n >> m >> a;

  int s = 1, e = m;

  while (a--) {
    cin >> t;
    if (s <= t && t <= e) {
      continue;
    }
    while (true) {
      if (s <= t && t <= e) {
        break;
      }
      if (e < t) {
        s++, e++;
      } else if (t < s) {
        s--, e--;
      }
      ans++;
    }
  }

  cout << ans << "\n";

  return 0;
}
