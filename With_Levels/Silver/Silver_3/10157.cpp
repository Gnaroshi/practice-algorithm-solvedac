// problem: 자리배정
// id: 10157
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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int c, r, k, cur = 1, cx = 0, cy = 0, dir = 0, nx, ny;
  cin >> r >> c >> k;

  if (k == 1) {
    cout << "1 1\n";
    return 0;
  }
  if (k > c * r) {
    cout << "0\n";
    return 0;
  }

  vector<vb> chk(c, vb(r, false));
  chk[cx][cy] = true;

  while (cur != k) {
    nx = cx + dx[dir];
    ny = cy + dy[dir];
    if (nx < 0 || nx >= c || ny < 0 || ny >= r || chk[nx][ny]) {
      dir++;
      dir %= 4;
    }
    cx = cx + dx[dir];
    cy = cy + dy[dir];
    chk[cx][cy] = true;

    cur++;
  }

  cout << cy + 1 << ' ' << cx + 1 << '\n';

  // for (auto i : chk) {
  //   for (auto j : i) {
  //     cout << j << ' ';
  //   }
  //
  //   cout << '\n';
  // }

  return 0;
}
