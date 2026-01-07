// problem: 거듭제곱
// id: 1740
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

  ll n, ans = 0, mul = 1;
  cin >> n;
  string s = "";
  while (n) {
    if (n % 2 == 1) {
      s += '1';
    } else {
      s += '0';
    }
    n /= 2;
  }

  for (auto i : s) {
    if (i == '1') {
      ans += mul;
    }
    mul *= 3;
  }

  cout << ans << '\n';

  return 0;
}
