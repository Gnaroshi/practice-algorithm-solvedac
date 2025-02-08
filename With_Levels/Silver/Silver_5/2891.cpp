// problem: 카약과 강풍
// id: 2891
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

  int n, s, r;
  int ans = 0, t;
  cin >> n >> s >> r;
  vb a(12, 0), b(12, 0);
  for (int i = 0; i < s; i++) {
    cin >> t;
    a[t] = true;
  }

  for (int i = 0; i < r; i++) {
    cin >> t;
    b[t] = true;
    if (a[t]) {
      a[t] = false;
      b[t] = false;
    }
  }

  for (int i = 1; i <= 10; i++) {
    if (!a[i])
      continue;
    if (b[i - 1]) {
      b[i - 1] = false;
    } else if (b[i + 1]) {
      b[i + 1] = false;
    } else
      ans++;
  }
  cout << ans << '\n';

  return 0;
}
