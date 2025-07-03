// problem: 필터
// id: 1895
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

  int n, m, t, cnt = 0;
  cin >> n >> m;
  int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
  int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
  vvi v(n, vi(m));
  for (auto &i : v) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  cin >> t;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < m - 1; j++) {
      vi tmp;
      tmp.push_back(v[i][j]);
      for (int dir = 0; dir < 8; dir++) {
        tmp.push_back(v[i + dx[dir]][j + dy[dir]]);
      }
      sort(tmp.begin(), tmp.end());
      if (tmp[4] >= t) {
        cnt++;
      }
    }
  }

  cout << cnt << "\n";

  return 0;
}
