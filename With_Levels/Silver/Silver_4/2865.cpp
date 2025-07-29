// problem: 나는 위대한 슈퍼스타K
// id: 2865
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

  int n, m, k, a;
  double ans = 0, b;
  cin >> n >> m >> k;
  vd v(n + 1, 0);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a >> b;
      v[a] = max(v[a], b);
    }
  }

  sort(v.begin(), v.end(), greater<>());
  for (int i = 0; i < k; i++) {
    ans += v[i];
  }

  cout.precision(1);
  cout << fixed;
  cout << ans << '\n';

  return 0;
}
