// problem: 과제는 끝나지 않아!
// id: 17952
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

  int n, op, a, t, ans = 0, ca = -1, ct = -1;
  cin >> n;
  stack<pair<int, int>> stk;
  bool chk = false;
  for (int i = 0; i < n; i++) {
    cin >> op;
    if (op == 1) {
      if (ca != -1 && ct != -1) {
        stk.push({ca, ct});
      }
      cin >> ca >> ct;
      ct--;
    } else {
      if (ca != -1 && ct != -1) {
        ct--;
      } else if (!stk.empty()) {
        tie(ca, ct) = stk.top();
        stk.pop();
        ct--;
      }
    }

    if (ca != -1 && ct != -1) {
      if (ct == 0) {
        ans += ca;
        ca = -1, ct = -1;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
