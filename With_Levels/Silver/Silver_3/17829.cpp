// problem: 222-풀링
// id: 17829
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
  vvi v(n, vi(n));
  for (auto &i : v) {
    for (auto &j : i) {
      cin >> j;
    }
  }
  while (true) {
    vvi t(n / 2, vi(n / 2));
    for (int i = 0; i < n; i += 2) {
      for (int j = 0; j < n; j += 2) {
        vi m = {v[i][j], v[i + 1][j], v[i][j + 1], v[i + 1][j + 1]};
        sort(m.begin(), m.end());
        t[i / 2][j / 2] = m[2];
      }
    }
    v = t;
    n /= 2;
    if (n == 1) {
      cout << v[0][0] << '\n';
      break;
    }
  }

  return 0;
}
