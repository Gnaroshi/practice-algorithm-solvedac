// problem: 다이나믹이 뭐예요?
// id: 14494
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

  const int MD = 1000000007;
  int n, m;
  cin >> n >> m;
  vvi v(n + 1, vi(m + 1, 0));
  v[0][0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      v[i][j] = v[i - 1][j] + v[i][j - 1];
      v[i][j] %= MD;
      v[i][j] += v[i - 1][j - 1];
      v[i][j] %= MD;
    }
  }

  cout << v[n][m] % MD << '\n';

  return 0;
}
