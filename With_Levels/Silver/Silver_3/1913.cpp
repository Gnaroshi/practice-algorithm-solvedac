// problem: 달팽이
// id: 1913
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

int dirs[5][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int main(void) {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int n, a, x, y, iter, cur = 2, ax, ay;
  cin >> n >> a;

  vector<vector<int>> v(n, vector<int>(n));
  iter = x = y = n / 2;
  v[x][y] = 1;

  for (int i = 0; i < iter; i++) {
    for (int dir = 0; dir < 5; dir++) {
      if (dir == 0) {
        x += dirs[dir][0];
        y += dirs[dir][1];
        v[x][y] = cur++;
      } else if (dir == 1) {
        for (int j = i * 2 + 1; j > 0; j--) {
          x += dirs[dir][0];
          y += dirs[dir][1];
          v[x][y] = cur++;
        }
      } else if (dir == 2) {
        for (int j = i * 2 + 2; j > 0; j--) {
          x += dirs[dir][0];
          y += dirs[dir][1];
          v[x][y] = cur++;
        }
      } else if (dir == 3) {
        for (int j = i * 2 + 2; j > 0; j--) {
          x += dirs[dir][0];
          y += dirs[dir][1];
          v[x][y] = cur++;
        }
      } else if (dir == 4) {
        for (int j = i * 2 + 2; j > 0; j--) {
          x += dirs[dir][0];
          y += dirs[dir][1];
          v[x][y] = cur++;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] == a)
        ax = i + 1, ay = j + 1;
      cout << v[i][j] << (j != n - 1 ? ' ' : '\n');
    }
  }
  cout << ax << ' ' << ay << "\n";

  return 0;
}
