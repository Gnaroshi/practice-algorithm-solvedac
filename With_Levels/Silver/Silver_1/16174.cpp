// problem: 점프왕 쩰리 (Large)
// id: 16174
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
using vvb = vector<vb>;
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

  int n, cx, cy, nx, ny, t;
  cin >> n;
  char v[101][101];
  vvb chk(n, vb(n, true));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t;
      v[i][j] = t;
    }
  }
  queue<pair<char, char>> q;
  q.push({0, 0});

  while (!q.empty()) {
    tie(cx, cy) = q.front();
    q.pop();
    chk[cx][cy] = false;
    if (v[cx][cy] == -1) {
      cout << "HaruHaru\n";
      return 0;
    }

    nx = cx + v[cx][cy];
    ny = cy;

    if (nx < 0 || nx >= n) {
    } else {
      if (chk[nx][ny]) {
        q.push({nx, ny});
        chk[nx][ny] = false;
      }
    }

    nx = cx;
    ny = cy + v[cx][cy];

    if (ny < 0 || ny >= n) {
    } else {
      if (chk[nx][ny]) {
        q.push({nx, ny});
      }
    }
  }

  cout << "Hing\n";

  return 0;
}
