// problem: 간판
// id: 5534
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

  int tc, ans = 0, tgtl, tl, dist, idx, cur;
  string tgt, t;
  bool chk;
  cin >> tc >> tgt;
  tgtl = tgt.length();
  while (tc--) {
    cin >> t;
    tl = t.length();
    chk = false;
    for (int i = 0; i < tl; i++) {
      if (t[i] != tgt[0]) {
        continue;
      }
      dist = idx = 1;
      while (true) {
        cur = i + dist * idx;
        if (t[cur] == tgt[idx] && cur < tl) {
          idx++;
          if (idx >= tgtl) {
            chk = true;
            break;
          }
        } else {
          dist++;
          idx = 1;
          if (dist >= tl) {
            break;
          }
        }
      }
      if (chk) {
        break;
      }
    }
    if (chk) {
      ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}
