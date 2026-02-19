// problem: 세 번 이내에 사과를 먹자
// id: 26169
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

  int dx[4] = {0, -1, 0, 1};
  int dy[4] = {1, 0, -1, 0};
  const int SZ = 5;
  vvi brd(SZ, vi(SZ, 0));
  int cx, cy, nx, ny, cnt, mv;
  for (int i = 0; i < SZ; i++) {
    for (int j = 0; j < SZ; j++) {
      cin >> brd[i][j];
    }
  }
  int r, c;
  cin >> r >> c;
  queue<pair<pair<pii, int>, pair<vvi, int>>> q;
  q.push({{{r, c}, 0}, {brd, 0}});

  while (!q.empty()) {
    pair<pii, int> t;
    vvi tbrd(SZ, vi(SZ, 0));
    pair<vvi, int> tmv;
    tie(t, tmv) = q.front();
    q.pop();
    cx = t.first.first;
    cy = t.first.second;
    cnt = t.second;
    tbrd = tmv.first;
    mv = tmv.second;
    if (mv >= 3) {
      continue;
    }

    for (int dir = 0; dir < 4; dir++) {
      nx = cx + dx[dir];
      ny = cy + dy[dir];
      if (nx < 0 || nx >= SZ || ny < 0 || ny >= SZ) {
        continue;
      }
      if (tbrd[nx][ny] == -1) {
        continue;
      }
      if (tbrd[nx][ny] == 1) {
        if (cnt == 1) {
          cout << "1\n";
          return 0;
        } else {
          tbrd[cx][cy] = -1;
          q.push({{{nx, ny}, cnt + 1}, {tbrd, mv + 1}});
        }
      } else {
        tbrd[cx][cy] = -1;
        q.push({{{nx, ny}, cnt}, {tbrd, mv + 1}});
      }
    }
  }

  cout << "0\n";

  return 0;
}
