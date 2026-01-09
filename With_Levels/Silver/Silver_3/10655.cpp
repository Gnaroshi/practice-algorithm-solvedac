// problem: 마라톤 1
// id: 10655
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <cstdlib>
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

int fn(pii a, pii b) {
  return (abs(a.first - b.first) + abs(a.second - b.second));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = 0x3f3f3f3f, cur = 0;
  cin >> n;
  vpi v(n);
  cin >> v[0].first >> v[0].second;
  for (int i = 1; i < n; i++) {
    cin >> v[i].first >> v[i].second;
    cur += (fn(v[i], v[i - 1]));
  }

  for (int i = 1; i < n - 1; i++) {
    ans = min(ans, cur - fn(v[i], v[i - 1]) - fn(v[i], v[i + 1]) +
                       fn(v[i - 1], v[i + 1]));
  }

  cout << ans << '\n';

  return 0;
}
