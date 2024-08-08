// problem: 창영이와 버스
// id: 22113
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

  int n, m, ans = 0, cur;
  cin >> n >> m;

  vi cb(m);
  for (int i = 0; i < m; i++) {
    cin >> cb[i];
    cb[i]--;
  }

  vvi b(n, vi(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }
  for (int i = 1; i < m; i++) {
    ans += b[cb[i - 1]][cb[i]];
  }
  cout << ans << '\n';

  return 0;
}
