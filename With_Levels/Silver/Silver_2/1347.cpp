// problem: 미로 만들기
// id: 1347
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

const int MX = 101;

int n;
char cur;
string s;
int board[MX][MX];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> s;

  int x = 50, y = 50, dir = 2;

  board[x][y] = 1;

  for (int i = 0; i < n; i++) {
    cur = s[i];
    if (cur == 'R') {
      if (dir == 0)
        dir = 2;
      else if (dir == 1)
        dir = 3;
      else if (dir == 2)
        dir = 1;
      else if (dir == 3)
        dir = 0;

    } else if (cur == 'L') {
      if (dir == 0)
        dir = 3;
      else if (dir == 1)
        dir = 2;
      else if (dir == 2)
        dir = 0;
      else if (dir == 3)
        dir = 1;
    } else if (cur == 'F') {
      x += dx[dir];
      y += dy[dir];
      board[x][y] = 1;
    }
  }

  int ax, ay, bx, by;
  ax = ay = MX;
  bx = by = 0;

  for (int i = 0; i < MX; i++) {
    for (int j = 0; j < MX; j++) {
      if (board[i][j] == 1) {
        if (i < ax)
          ax = i;
        if (i > bx)
          bx = i;
        if (j < ay)
          ay = j;
        if (j > by)
          by = j;
      }
    }
  }

  for (int i = ax; i <= bx; i++) {
    for (int j = ay; j <= by; j++) {
      if (board[i][j] == 1)
        cout << '.';
      else
        cout << "#";
    }
    cout << '\n';
  }

  return 0;
}
