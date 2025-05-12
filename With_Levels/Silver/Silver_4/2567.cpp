// problem: 색종이 - 2
// id: 2567
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

  vvi v(102, vi(102, 0));
  vvi chk(102, vi(102, 0));
  int n, a, b, ans = 0, cx, cy, nx, ny;
  int dx[4] = {0, -1, 0, 1};
  int dy[4] = {1, 0, -1, 0};
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    for (int x = a; x < a + 10; x++) {
      for (int y = b; y < b + 10; y++) {
        v[x][y] = 1;
      }
    }
  }

  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 100; j++) {
      if (v[i][j] == 0)
        continue;
      for (int dir = 0; dir < 4; dir++) {
        nx = i + dx[dir];
        ny = j + dy[dir];
        if (v[nx][ny] == 0) {
          ans++;
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
