// problem: 피하자
// id: 25379
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

  ll n, a = 0, b = 0, ta = 0, tb = 0, t;
  cin >> n;
  vb v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t % 2) {
      v[i] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    if (v[i]) {
      ta++;
      a += tb;
    } else {
      tb++;
      b += ta;
    }
  }

  cout << min(a, b) << '\n';

  return 0;
}
