// problem: 그래픽스 퀴즈
// id: 2876
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

  int n, ans = 1, ang, t, tg;
  cin >> n;
  vvi v(n, vi(2)), dp(n, vi(6));

  for (int i = 0; i < n; i++) {
    cin >> v[i][0] >> v[i][1];
  }

  dp[0][v[0][0]] = 1;
  dp[0][v[0][1]] = 1;
  ang = min(v[0][0], v[0][1]);

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      t = v[i][j];
      tg = dp[i - 1][t] + 1;
      dp[i][t] = tg;
      if (tg > ans) {
        ans = tg;
        ang = t;
      } else if (tg == ans) {
        ang = min(ang, t);
      }
    }
  }

  cout << ans << ' ' << ang << '\n';

  return 0;
}
