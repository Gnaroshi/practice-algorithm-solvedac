// problem: 행운의 바퀴
// id: 2840
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

  int n, k, cur = 0, chg;
  char c;
  string ans = "";
  bool chk = false;
  vb alchk(26, false);

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    ans += '?';
  }

  for (int i = 0; i < k; i++) {
    cin >> chg >> c;
    cur += chg;
    cur %= n;

    if (ans[cur] == '?') {
      ans[cur] = c;
      if (alchk[c - 'A']) {
        chk = true;
      } else {
        alchk[c - 'A'] = true;
      }
    } else if (ans[cur] != c) {
      chk = true;
    }
  }

  if (chk) {
    cout << "!\n";
  } else {
    ans = ans.substr(cur + 1, n - cur) + ans.substr(0, cur + 1);
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
  }

  return 0;
}
