// problem: 수들의 합2
// id: 2003
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

  ll n, m, ans = 0, l = 0, r = 0, cur = 0;
  cin >> n >> m;
  vll v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  while (true) {
    if (cur >= m) {
      cur -= v[l];
      l++;
    } else if (r == n) {
      break;
    } else {
      cur += v[r];
      r++;
    }
    if (cur == m) {
      ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}
