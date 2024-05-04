// problem: 치즈
// id: 2638
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
#include <utility>
#include <vector>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int n, m, ans;
int brd[105][105];
queue<pair<int, int>> q;

void fn(int cx, int cy) {
  if (brd[cx][cy] != 0)
    return;
  brd[cx][cy] = -1;
  for (int dir = 0; dir < 4; dir++) {
    int nx = cx + dx[dir];
    int ny = cy + dy[dir];
    if (nx < 1 || nx > n || ny < 1 || ny > m)
      continue;
    fn(nx, ny);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      cin >> brd[i][j];

  fn(1, 1);

  while (true) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (brd[i][j] == 1) {
          int cnt = 0;
          for (int dir = 0; dir < 4; dir++) {
            int nx = i + dx[dir];
            int ny = j + dy[dir];
            if (nx < 1 || nx > n || ny < 1 || ny > m)
              continue;
            if (brd[nx][ny] == -1)
              cnt++;
          }
          if (cnt > 1)
            q.push({i, j});
        }
      }
    }
    if (q.empty())
      break;
    while (!q.empty()) {
      int cx, cy;
      tie(cx, cy) = q.front();
      q.pop();
      brd[cx][cy] = -1;
      for (int dir = 0; dir < 4; dir++) {
        int nx = cx + dx[dir];
        int ny = cy + dy[dir];
        if (nx < 1 || nx > n || ny < 1 || ny > m)
          continue;
        fn(nx, ny);
      }
    }
    ans++;
  }

  cout << ans << '\n';

  return 0;
}
