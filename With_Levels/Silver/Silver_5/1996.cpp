// problem: 지뢰 찾기
// id: 1996
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

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  int n;
  cin >> n;
  vvi v(n, vi(n, 0));
  vvi ans(n, vi(n, 0));
  for (int i = 0; i < n; i++) {
    cin >> s;
    for (int j = 0; j < n; j++) {
      if (s[j] != '.') {
        v[i][j] = s[j] - '0';
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int t = v[i][j];
      if (t != 0) {
        for (int k = 0; k < 8; k++) {
          int cx = i + dx[k];
          int cy = j + dy[k];
          if (cx < 0 || cx >= n || cy < 0 || cy >= n)
            continue;
          ans[cx][cy] += t;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] != 0)
        cout << '*';
      else {
        if (ans[i][j] > 9)
          cout << 'M';
        else
          cout << ans[i][j];
      }
    }
    cout << '\n';
  }

  return 0;
}
