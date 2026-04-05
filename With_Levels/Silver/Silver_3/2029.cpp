// problem: 성냥
// id: 2029
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

vs brd(10);
bool chkH(int x, int y) { return brd[x * 3][y * 3 + 1] == '-'; }
bool chkV(int x, int y) { return brd[x * 3 + 1][y * 3] == '|'; }

bool fn(int x, int y, int sz) {
  for (int i = 0; i < sz; i++) {
    if (!chkH(x, y + i)) {
      return false;
    }
    if (!chkH(x + sz, y + i)) {
      return false;
    }
  }
  for (int i = 0; i < sz; i++) {
    if (!chkV(x + i, y)) {
      return false;
    }
    if (!chkV(x + i, y + sz)) {
      return false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 0; i < 10; i++) {
    getline(cin, brd[i]);
  }

  int ans1 = 0, ans2 = 0;
  for (int i = 0; i <= 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (chkH(i, j)) {
        ans1++;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j <= 3; j++) {
      if (chkV(i, j)) {
        ans1++;
      }
    }
  }

  for (int sz = 1; sz <= 3; sz++) {
    for (int x = 0; x <= 3 - sz; x++) {
      for (int y = 0; y <= 3 - sz; y++) {
        if (fn(x, y, sz)) {
          ans2++;
        }
      }
    }
  }

  cout << 24 - ans1 << ' ' << ans2 << '\n';

  return 0;
}
