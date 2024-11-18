// problem: Flipper
// id:
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

  string s;
  cin >> s;
  bool h = false, v = false;
  for (auto &i : s) {
    if (i == 'H')
      h = !h;
    else if (i == 'V')
      v = !v;
  }

  int ans[2][2] = {{1, 2}, {3, 4}};
  if (h) {
    swap(ans[0][0], ans[1][0]);
    swap(ans[0][1], ans[1][1]);
  }
  if (v) {
    swap(ans[0][0], ans[0][1]);
    swap(ans[1][0], ans[1][1]);
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << ans[i][j] << (j != 1 ? ' ' : '\n');
    }
  }

  return 0;
}
