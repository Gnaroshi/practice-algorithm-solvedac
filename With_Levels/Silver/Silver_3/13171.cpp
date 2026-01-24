// problem: A
// id: 13171
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

  const ll MD = 1000000007;
  const int SZ = 66;
  ll a, x, ans = 1;
  cin >> a >> x;
  vll v(SZ, 1);
  a %= MD;
  v[1] = a;
  v[2] = v[1] * v[1];
  v[2] %= MD;
  for (int i = 3; i < SZ; i++) {
    v[i] = v[i - 1] * v[i - 1];
    v[i] %= MD;
  }

  for (int i = 0; i < SZ - 3; i++) {
    if (x & (1LL << i)) {
      ans *= v[i + 1] % MD;
      ans %= MD;
    }
  }

  cout << ans << '\n';

  return 0;
}
