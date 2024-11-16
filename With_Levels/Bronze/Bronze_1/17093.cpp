// problem: Total Circlr
// id: 17093
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

  int n, m;
  cin >> n >> m;
  vpll p(n), q(m);
  for (auto &i : p)
    cin >> i.first >> i.second;
  for (auto &i : q)
    cin >> i.first >> i.second;

  ll ans = 0;
  for (auto &i : p) {
    for (auto &j : q) {
      ans = max(ans, ((i.first - j.first) * (i.first - j.first) +
                      (i.second - j.second) * (i.second - j.second)));
    }
  }

  cout << ans << '\n';

  return 0;
}
