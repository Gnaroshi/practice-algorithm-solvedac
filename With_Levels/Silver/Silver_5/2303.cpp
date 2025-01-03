// problem: 숫자 게임
// id: 2303
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

  int n, ans = 0, mx = -1, tmx, t;
  cin >> n;

  for (int l = 1; l <= n; l++) {
    vi v(5);
    for (auto &j : v)
      cin >> j;
    tmx = 0;
    for (int i = 0; i < 3; i++) {
      for (int j = i + 1; j < 4; j++) {
        t = v[i] + v[j];
        for (int k = j + 1; k < 5; k++) {
          int tm = t + v[k];
          tmx = max(tmx, tm % 10);
        }
      }
    }

    if (tmx >= mx) {
      ans = l;
      mx = tmx;
    }
  }

  cout << ans << '\n';

  return 0;
}
