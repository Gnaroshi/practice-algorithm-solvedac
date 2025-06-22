// problem: 치킨치킨치킨
// id: 16439
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

  int n, m, mx = 0;
  cin >> n >> m;
  vvi v(n, vi(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
    }
  }

  for (int i = 0; i < m - 2; i++) {
    for (int j = i + 1; j < m - 1; j++) {
      for (int k = j + 1; k < m; k++) {
        int tmx = 0;
        for (int ck = 0; ck < n; ck++) {
          tmx += max(v[ck][i], max(v[ck][j], v[ck][k]));
        }

        mx = max(mx, tmx);
      }
    }
  }

  cout << mx << '\n';

  return 0;
}
