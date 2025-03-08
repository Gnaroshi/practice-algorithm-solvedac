// problem: 사탕 박사 고창영
// id: 2508
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

  int tc;
  cin >> tc;
  while (tc--) {
    int r, c, ans = 0;
    cin >> r >> c;
    vs v(r);
    for (auto &i : v) {
      cin >> i;
    }

    int a, b;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (v[i][j] != 'o') {
          continue;
        }
        a = i + 1;
        b = i - 1;
        if (a < r && b >= 0) {
          if (v[a][j] == '^' && v[b][j] == 'v') {
            ans++;
          }
        }
        a = j + 1;
        b = j - 1;
        if (a < c && b >= 0) {
          if (v[i][a] == '<' && v[i][b] == '>') {
            ans++;
          }
        }
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
