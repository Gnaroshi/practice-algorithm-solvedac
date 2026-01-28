// problem: 영식이의 손가락
// id: 1614
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

  ll n, m, ans = 0;
  cin >> n >> m;
  if (m == 0) {
    ans += n - 1;
  } else {
    if (n == 1 || n == 5) {
      ans += 8 * m;
      if (n == 5) {
        ans += 4;
      }
    } else {
      ans += 4 * m + 1;
      if (m % 2) {
        ans += 4 - n;
      } else {
        ans += n - 2;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
