// problem: 투명
// id: 1531
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

  int n, m, a, b, c, d, ans = 0;
  vvi v(101, vi(101, 0));
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c >> d;
    for (int j = a; j <= c; j++) {
      for (int k = b; k <= d; k++) {
        v[j][k]++;
      }
    }
  }

  for (int i = 1; i < 101; i++) {
    for (int j = 1; j < 101; j++) {
      if (v[i][j] > m)
        ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}
