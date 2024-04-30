// problem: Σ
// id: 13172
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;
const ll MD = 1000000007;

ll m, ans, ts, tn, g, es;

ll ninv(ll a, ll b) {
  if (b == 1)
    return a;
  if (b % 2)
    return a * ninv(a, b - 1) % MD;

  es = ninv(a, b / 2) % MD;
  return es * es % MD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> tn >> ts;
    g = gcd(tn, ts);
    tn /= g, ts /= g;
    ans += ts * ninv(tn, MD - 2) % MD;
    ans %= MD;
  }

  cout << ans;

  return 0;
}
