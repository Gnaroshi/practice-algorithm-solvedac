// problem: 수열과 쿼리 38
// id: 18917
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

  int m, q, x;
  ll a = 0, b = 0;
  cin >> m;
  vi v;
  while (m--) {
    cin >> q;
    if (q == 1) {
      cin >> x;
      a += x;
      b ^= x;
    } else if (q == 2) {
      cin >> x;
      a -= x;
      b ^= x;
    } else if (q == 3) {
      cout << a << '\n';
    } else if (q == 4) {
      cout << b << '\n';
    }
  }

  return 0;
}
