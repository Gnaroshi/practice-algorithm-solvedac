// problem: 귀찮아 (SIB)
// id: 14929
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
  vi v(n);
  vll t(n, 0);
  for (auto &i : v)
    cin >> i;
  ll ans = 0;

  t[n - 1] = v[n - 1];

  for (int i = n - 2; i >= 0; i--) {
    t[i] += t[i + 1] + v[i];
  }

  int iter = n - 1;
  for (int i = 0; i < iter; i++) {
    ans += v[i] * t[i + 1];
  }

  // for (int i = 0; i < n; i++)
  //   cout << t[i] << ' ';
  // cout << "\n";

  cout << ans << '\n';

  return 0;
}
