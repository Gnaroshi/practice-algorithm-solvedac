// problem: 화살표 그리기
// id: 15970
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

  int n, y;
  ll x, ans = 0;

  cin >> n;
  vvi v(n + 1, vi());
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    v[y].push_back(x);
  }

  for (int i = 1; i <= n; i++) {
    sort(v[i].begin(), v[i].end());
  }

  for (int i = 1; i <= n; i++) {
    int iter = v[i].size();
    if (iter < 2) {
      continue;
    }
    ans += v[i][1] - v[i][0];
    ans += v[i][iter - 1] - v[i][iter - 2];
    for (int j = 1; j < iter - 1; j++) {
      ans += min(v[i][j] - v[i][j - 1], v[i][j + 1] - v[i][j]);
    }
  }

  cout << ans << '\n';

  return 0;
}
