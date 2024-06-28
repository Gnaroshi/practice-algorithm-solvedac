// problem: 웰컴 키트
// id: 30802
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, st, t, p;
  vi v(6);
  cin >> n;
  for (auto &i : v)
    cin >> i;
  cin >> t >> p;

  int ans = 0;
  for (const auto &i : v) {
    ans += (i / t + ((i % t != 0 ? 1 : 0)));
  }

  cout << ans << '\n' << n / p << ' ' << n % p << '\n';

  return 0;
}
