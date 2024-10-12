// problem: Polynomial
// id: 19575
// tag:
// time taken:

#include <algorithm>
#include <cmath>
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

  const ll MOD = 1000000007;
  ll n, x, a, b, cur;
  cin >> n >> x;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (i == 0) {
      cur = x * a;
      cur %= MOD;
    } else {
      cur += a;
      cur *= x;
    }
    cur %= MOD;
  }

  cin >> a >> b;
  cur += a;
  cout << cur % MOD << '\n';

  return 0;
}
