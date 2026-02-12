// problem: 도시와 비트코인
// id: 31575
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

  int dx[2] = {0, 1};
  int dy[2] = {1, 0};

  int n, m;
  cin >> m >> n;
  vvi v(n, vi(m));
  vvi vis(n, vi(m, 0));

  for (auto &i : v) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  int cx, cy, nx, ny;
  queue<pii> q;
  q.push({0, 0});
  vis[0][0] = 1;
  while (!q.empty()) {
    tie(cx, cy) = q.front();
    q.pop();
    for (int i = 0; i < 2; i++) {
      nx = cx + dx[i];
      ny = cy + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
        continue;
      }
      if (vis[nx][ny] == 1 || v[nx][ny] == 0) {
        continue;
      }
      vis[nx][ny] = 1;
      q.push({nx, ny});
    }
  }

  if (vis[n - 1][m - 1] == 1) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}
