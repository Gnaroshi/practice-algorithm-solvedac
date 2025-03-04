// problem: 돌려 돌려 돌림판!
// id: 11504
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
    int n, m, x = 0, y = 0, t, ans = 0;
    string s = "";
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
      cin >> t;
      x += t;
      x *= 10;
    }
    for (int i = 0; i < m; i++) {
      cin >> t;
      y += t;
      y *= 10;
    }
    x /= 10, y /= 10;

    char c;
    for (int i = 0; i < n; i++) {
      cin >> c;
      s += c;
    }
    s += s;

    for (int i = 0; i < n; i++) {
      t = stoi(s.substr(i, m));
      if (x <= t && t <= y) {
        ans++;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
