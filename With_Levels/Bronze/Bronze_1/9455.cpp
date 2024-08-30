// problem: 박스
// id: 9455
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, cnt = 0;
    cin >> n >> m;

    vector<vector<bool>> v(n, vector<bool>(m, 0));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        bool t;
        cin >> t;
        v[i][j] = t;
      }
    }

    for (int i = 0; i < m; i++) {
      for (int j = n - 2; j >= 0; j--) {
        if (v[j][i] == 1) {
          int cn = j;
          for (int k = j + 1; k < n; k++) {
            if (v[k][i] == 0) {
              // swap(v[k][i], v[cn][i]);
              bool t;
              t = v[k][i];
              v[k][i] = v[cn][i];
              v[cn][i] = t;
              cnt++;
              cn = k;
            } else {
              break;
            }
          }
        }
      }
      // cout << "----------\n";
      // for (int a = 0; a < n; a++) {
      //   for (int b = 0; b < n; b++) {
      //     cout << v[a][b] << " ";
      //   }
      //   cout << '\n';
      // }
    }

    cout << cnt << '\n';
  }

  return 0;
}
