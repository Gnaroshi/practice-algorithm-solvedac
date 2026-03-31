// problem: 로마 카톨릭 미사
// id: 9518
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

int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, ans = 0, cur = 0, nx, ny, tcnt;
  cin >> n >> m;
  vs v(n);
  map<pair<int, int>, map<pair<int, int>, bool>> mp;
  for (auto &i : v) {
    cin >> i;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '.') {
        tcnt = 0;
        for (int dir = 0; dir < 8; dir++) {
          nx = i + dx[dir];
          ny = j + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
          }
          if (v[nx][ny] == 'o') {
            tcnt++;
          }
        }
        cur = max(cur, tcnt);
      } else {
        tcnt = 0;
        for (int dir = 0; dir < 8; dir++) {
          nx = i + dx[dir];
          ny = j + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
          }
          if (v[nx][ny] == 'o') {
            if (mp[{i, j}].find({nx, ny}) == mp[{i, j}].end()) {
              mp[{i, j}][{nx, ny}] = true;
              mp[{nx, ny}][{i, j}] = true;
              tcnt++;
            }
          }
        }
        ans += tcnt;
      }
    }
  }

  cout << ans + cur << '\n';

  return 0;
}
