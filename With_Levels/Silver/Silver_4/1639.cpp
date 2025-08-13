// problem: 행운의 티켓
// id: 1639
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

  string s;
  cin >> s;

  int sl = s.length(), mxl = sl / 2, ans = 0;

  for (int w = 1; w <= mxl; w++) {
    int w2 = w * 2, iter = sl - w, l = 0, r = 0;
    for (int i = 0; i < w; i++) {
      l += s[i] - '0';
    }
    for (int i = w; i < w2; i++) {
      r += s[i] - '0';
    }
    // cout << "start : " << w << " : " << l << ' ' << r << '\n';
    if (l == r) {
      ans = w2;
      continue;
    }
    for (int i = 1; i <= iter; i++) {
      l -= s[i - 1] - '0';
      l += s[i + w - 1] - '0';
      r -= s[i + w - 1] - '0';
      r += s[i + w2 - 1] - '0';
      // cout << w << " : " << l << ' ' << r << '\n';
      if (l == r) {
        ans = w2;
        break;
      }
    }
  }

  cout << ans << "\n";

  return 0;
}
