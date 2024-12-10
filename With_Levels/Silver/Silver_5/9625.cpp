// problem: BABBA
// id: 9625
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

  pll dp[46];
  int k;
  cin >> k;

  dp[0] = {1, 0}, dp[1] = {0, 1};
  for (int i = 2; i < 46; i++) {
    dp[i] = {dp[i - 1].second, dp[i - 1].first + dp[i - 1].second};
  }

  cout << dp[k].first << ' ' << dp[k].second << "\n";

  return 0;
}
