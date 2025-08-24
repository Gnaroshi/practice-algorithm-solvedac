// problem: Bucket Brigade
// id: 17198
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

  int bx, by, lx, ly;
  vs v(10);
  vvi chk(10, vi(10, 0));
  int dx[4] = {0, -1, 0, 1};
  int dy[4] = {1, 0, -1, 0};
  for (int i = 0; i < 10; i++) {
    cin >> v[i];

    for (int j = 0; j < 10; j++) {
      if (v[i][j] == 'B') {
        bx = i, by = j;
      } else if (v[i][j] == 'L') {
        lx = i, ly = j;
      }
    }
  }
  int cx, cy, nx, ny;
  queue<pair<int, int>> q;
  q.push({bx, by});
  chk[bx][by] = 1;
  while (!q.empty()) {
    tie(cx, cy) = q.front();
    q.pop();
    for (int dir = 0; dir < 4; dir++) {
      nx = cx + dx[dir];
      ny = cy + dy[dir];
      if (nx >= 10 || nx < 0 || ny >= 10 || ny < 0) {
        continue;
      }
      if (chk[nx][ny] > 0) {
        continue;
      }
      if (v[nx][ny] == 'R') {
        continue;
      }
      chk[nx][ny] = chk[cx][cy] + 1;
      if (v[nx][ny] == 'L') {
        cout << chk[nx][ny] - 2 << "\n";
        return 0;
      }
      q.push({nx, ny});
    }
  }

  return 0;
}
