// problem: 조약돌 꺼내기
// id: 13251
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

  int m, k, tot = 0;
  double ans, t;
  cin >> m;
  vi v(m);
  vd p(m);
  for (auto &i : v) {
    cin >> i;
    tot += i;
  }
  cin >> k;

  for (int i = 0; i < m; i++) {
    if (v[i] < k) {
      continue;
    }
    t = 1.0;
    for (int j = 0; j < k; j++) {
      t *= double(v[i] - j) / (tot - j);
    }
    p[i] = t;
  }

  ans = 0;
  for (int i = 0; i < m; i++) {
    ans += p[i];
  }

  cout << fixed;
  cout.precision(11);
  cout << ans << '\n';

  return 0;
}
