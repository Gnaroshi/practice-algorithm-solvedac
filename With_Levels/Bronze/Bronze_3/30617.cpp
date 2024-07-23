// problem: Knob
// id: 30617
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

  int t, ans = 0, l, r, bl, br;
  cin >> t;
  cin >> l >> r;
  if (l == r && l != 0)
    ans++;
  bl = l, br = r;
  for (int i = 1; i < t; i++) {
    cin >> l >> r;
    if (l == r && l != 0)
      ans++;
    if (l == bl && l != 0)
      ans++;
    if (r == br && r != 0)
      ans++;
    bl = l, br = r;
  }
  cout << ans << '\n';

  return 0;
}
