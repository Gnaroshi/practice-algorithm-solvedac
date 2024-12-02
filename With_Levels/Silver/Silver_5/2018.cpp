// problem: 수들의 합5
// id: 2018
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

  ll n, ans = 0, cur = 1, a = 1, b = 1;
  cin >> n;

  while (b <= n) {
    if (cur == n) {
      ans++;
      b++;
      cur += b;
    } else if (cur < n) {
      b++;
      cur += b;
    } else {
      cur -= a;
      a++;
    }
  }

  cout << ans << '\n';

  return 0;
}
