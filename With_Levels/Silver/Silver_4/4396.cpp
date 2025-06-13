// problem: 지뢰 찾기
// id: 4396
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

  int n;
  cin >> n;
  vs a(n), b(n);
  int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
  int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }
  bool chk = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i][j] == 'x') {
        if (a[i][j] == '*') {
          chk = true;
          break;
        }
      }
    }
    if (chk) {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i][j] == 'x') {
        if (a[i][j] == '*') {
          cout << '*';
        } else {
          int cnt = 0;
          for (int dir = 0; dir < 8; dir++) {
            int cx = i + dx[dir];
            int cy = j + dy[dir];
            if (cx < 0 || cx >= n || cy < 0 || cy >= n) {
              continue;
            }
            if (a[cx][cy] == '*') {
              cnt++;
            }
          }

          cout << cnt;
        }
      } else {
        if (chk && a[i][j] == '*') {
          cout << '*';
        } else {
          cout << '.';
        }
      }
    }
    cout << '\n';
  }

  return 0;
}
