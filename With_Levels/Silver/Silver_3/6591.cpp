// problem: 이항 쇼다운
// id: 6591
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

  ll n, k, r, ans, d;
  while (true) {
    cin >> n >> k;
    if (n == 0 && k == 0) {
      break;
    }

    d = ans = 1;
    r = n - k;
    if (r > k) {
      swap(r, k);
    }

    for (int i = n; i >= n - r + 1; i--) {
      ans *= i;
      ans /= d;
      d++;
    }

    cout << ans << "\n";
  }

  return 0;
}
