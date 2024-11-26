// problem: 행렬 곱셈
// id: 2740
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

  int n, m, k;
  cin >> n >> m;
  vvi a(n, vi(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  cin >> m >> k;
  vvi b(m, vi(k, 0));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      cin >> b[i][j];
    }
  }

  vvi ans(n, vi(k, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      int t = 0;
      for (int l = 0; l < m; l++) {
        t += a[i][l] * b[l][j];
      }
      ans[i][j] = t;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      cout << ans[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
