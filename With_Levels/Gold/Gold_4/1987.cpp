// problem: 알파벳
// id: 1987
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int r, c, ans;
char brd[21][21];
bool chk[26];

void dfs(int x, int y, int d) {
  ans = max(ans, d);
  for (int dir = 0; dir < 4; dir++) {
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
      if (chk[brd[nx][ny] - 'A'] == 0) {
        chk[brd[nx][ny] - 'A'] = 1;
        dfs(nx, ny, d + 1);
        chk[brd[nx][ny] - 'A'] = 0;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> r >> c;

  string t;
  for (int i = 0; i < r; i++) {
    cin >> t;
    for (int j = 0; j < c; j++)
      brd[i][j] = t[j];
  }

  chk[brd[0][0] - 'A'] = 1;
  dfs(0, 0, 1);
  cout << ans << '\n';

  return 0;
}
