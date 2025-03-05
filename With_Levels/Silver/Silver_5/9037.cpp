// problem: The candy war
// id: 9037
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
    int n, ans = 0;
    cin >> n;
    vi v(n), add(n, 0);
    for (auto &i : v) {
      cin >> i;
      if (i % 2 == 1) {
        i++;
      }
    }

    bool chk;
    while (true) {
      chk = true;
      for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 1) {
          v[i]++;
        }
        v[i] /= 2;
        add[i] = v[i];
      }
      for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) {
          chk = false;
          break;
        }
      }
      if (chk) {
        cout << ans << '\n';
        break;
      }
      ans++;
      for (int i = 1; i < n; i++) {
        v[i - 1] += add[i];
      }
      v[n - 1] += add[0];
    }
  }

  return 0;
}
