// problem: Project Teams
// id: 20044
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

  int n, ans = 0x3f3f3f3f, iter;
  cin >> n;

  iter = n << 1;

  vi v(iter);
  for (auto &i : v) {
    cin >> i;
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    ans = min(ans, v[i] + v[iter - i - 1]);
  }

  cout << ans << '\n';

  return 0;
}
