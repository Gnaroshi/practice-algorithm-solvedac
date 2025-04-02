// problem: 매우 어려운 문제
// id: 31738
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

  ll n, m, t, cur = 1;
  cin >> n >> m;
  if (n >= m) {
    cout << 0 << '\n';
  } else {
    for (int i = 1; i <= n; i++) {
      cur %= m;
      t = i % m;
      cur *= t;
    }
    cout << cur % m << '\n';
  }

  return 0;
}
