// problem: 부울행렬의 부울곱
// id: 14492
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

  int n;
  cin >> n;
  bool t;
  vector<vector<bool>> a(n, vector<bool>(n, false)),
      b(n, vector<bool>(n, false));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t;
      a[i][j] = (t == 1 ? true : false);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t;
      b[i][j] = (t == 1 ? true : false);
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      bool tchk = false;
      for (int k = 0; k < n; k++) {
        if (a[i][k] && b[k][j]) {
          tchk = true;
          break;
        }
      }
      ans += (tchk ? 1 : 0);
    }
  }

  cout << ans << '\n';

  return 0;
}
