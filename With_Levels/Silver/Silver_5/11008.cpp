// problem: 복붙의 달인
// id: 11008
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
    string s, p;
    cin >> s >> p;
    int ans = 0, sl = s.length(), pl = p.length(), iter = sl - pl + 1, lst = 0;

    for (int i = 0; i < iter; i++) {
      // cout << s[i] << ' ' << s.substr(i, pl) << ' ' << i << '\n';
      if (s.substr(i, pl) == p) {
        i += pl - 1;
      }
      ans++;
      lst = i + 1;
    }
    ans += sl - lst;
    // cout << "sl: " << sl << " lst: " << lst << '\n';
    cout << ans << "\n";
  }

  return 0;
}
