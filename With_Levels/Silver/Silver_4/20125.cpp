// problem: 쿠키의 신체 측정
// id: 20125
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

  int n, hx, hy, cnt, l;
  cin >> n;
  vs v(n);
  for (auto &i : v) {
    cin >> i;
  }

  bool tchk = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] == '*') {
        hx = i + 1, hy = j;
        tchk = true;
        break;
      }
    }
    if (tchk) {
      break;
    }
  }

  cout << hx + 1 << ' ' << hy + 1 << '\n';

  cnt = 0;
  for (int i = hy - 1; i >= 0; i--) {
    if (v[hx][i] == '_') {
      break;
    }
    cnt++;
  }

  cout << cnt << ' ';

  cnt = 0;
  for (int i = hy + 1; i < n; i++) {
    if (v[hx][i] == '_') {
      break;
    }
    cnt++;
  }

  cout << cnt << ' ';

  cnt = 0;
  for (int i = hx + 1; i < n; i++) {
    if (v[i][hy] == '_') {
      break;
    }
    cnt++;
  }

  l = cnt + 1;

  cout << cnt << ' ';

  cnt = 0;
  for (int i = hx + l; i < n; i++) {
    if (v[i][hy - 1] == '_') {
      break;
    }
    cnt++;
  }

  cout << cnt << ' ';

  cnt = 0;
  for (int i = hx + l; i < n; i++) {
    if (v[i][hy + 1] == '_') {
      break;
    }
    cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
