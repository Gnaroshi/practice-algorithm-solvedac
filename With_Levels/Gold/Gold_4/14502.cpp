// problem: 연구소
// id: 14502
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int n, m, ans, safs;
int brd[10][10], tbrd[10][10];
vector<pair<int, int>> vir, saf;
vector<bool> chk;

void copy_brd() {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      tbrd[i][j] = brd[i][j];
  for (int i = 0; i < safs; i++) {
    if (chk[i] == 1)
      tbrd[saf[i].first][saf[i].second] = 1;
  }
  return;
}

int cnt_saf() {
  int ret = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (tbrd[i][j] == 0)
        ret++;
  return ret;
}

void bfs(int x, int y) {
  queue<pair<int, int>> q;
  q.push({x, y});
  while (!q.empty()) {
    int cx, cy;
    tie(cx, cy) = q.front();
    q.pop();
    for (int dir = 0; dir < 4; dir++) {
      int nx = cx + dx[dir];
      int ny = cy + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m)
        continue;
      if (tbrd[nx][ny] == 0) {
        tbrd[nx][ny] = 2;
        q.push({nx, ny});
      }
    }
  }
  return;
}

void fn(int nxt, int cnt) {
  if (cnt == 3) {
    copy_brd();
    for (auto i : vir) {
      bfs(i.first, i.second);
    }
    ans = max(ans, cnt_saf());
    return;
  }
  for (int i = nxt; i < safs; i++) {
    if (chk[i] == 0) {
      chk[i] = 1;
      fn(i + 1, cnt + 1);
      chk[i] = 0;
    }
  }
  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> brd[i][j];
      if (brd[i][j] == 2)
        vir.push_back({i, j});
      else if (brd[i][j] == 0)
        saf.push_back({i, j});
    }
  }
  safs = saf.size();
  chk.resize(safs);
  fill(chk.begin(), chk.end(), 0);

  fn(0, 0);

  cout << ans << '\n';

  return 0;
}
