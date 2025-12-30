// problem: 블로그2
// id: 20365
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

  int n, ans = 0;
  string s, t = "";
  cin >> n >> s;

  int cb = 0, cr = 0, iter = s.length();
  char bef = s[0];
  t += bef;
  for (int i = 1; i < iter; i++) {
    if (bef != s[i]) {
      t += s[i];
    }
    bef = s[i];
  }

  for (auto i : t) {
    if (i == 'B') {
      cb++;
    } else {
      cr++;
    }
  }

  ans = 1 + min(cb, cr);
  cout << ans << '\n';

  return 0;
}
