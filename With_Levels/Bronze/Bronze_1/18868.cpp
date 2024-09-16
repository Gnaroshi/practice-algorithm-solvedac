// problem: 멀티버스 1
// id: 18868
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, t, ans = 0;
  cin >> n >> m;
  vvi v(n, vi(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> t;
      v[i][j] = t;
    }
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      bool chk = true;
      for (int a = 0; a < m - 1; a++) {
        for (int b = a + 1; b < m; b++) {
          if ((v[i][a] - v[i][b]) * (v[j][a] - v[j][b]) == 0) {
            if (v[i][a] - v[i][b] != v[j][a] - v[j][b]) {
              chk = false;
              break;
            }
          } else if ((v[i][a] - v[i][b]) * (v[j][a] - v[j][b]) < 0) {
            chk = false;
            break;
          }
        }
        if (!chk)
          break;
      }
      if (chk)
        ans++;
    }
  }
  cout << ans << '\n';

  return 0;
}
