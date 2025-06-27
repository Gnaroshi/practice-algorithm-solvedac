// problem: 철벽 보안 알고리즘
// id: 9322
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
    string t;
    vs a, b, c;
    vpi loc;
    vb chk(n, true);
    for (int i = 0; i < n; i++) {
      cin >> t;
      a.push_back(t);
    }
    for (int i = 0; i < n; i++) {
      cin >> t;
      for (int j = 0; j < n; j++) {
        if (chk[j]) {
          if (a[j] == t) {
            loc.push_back({j, i});
            chk[j] = false;
            break;
          }
        }
      }
    }
    sort(loc.begin(), loc.end());
    for (int i = 0; i < n; i++) {
      cin >> t;
      c.push_back(t);
    }
    for (int i = 0; i < n; i++) {
      cout << c[loc[i].second] << (i != n - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
