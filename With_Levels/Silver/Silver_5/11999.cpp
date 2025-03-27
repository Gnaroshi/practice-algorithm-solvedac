// problem: Milk Pails (Bronze)
// id: 11999
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

  int x, y, m, mx = 0, cur, t;
  cin >> x >> y >> m;

  for (int i = 0;; i++) {
    cur = i * x;
    if (cur > m) {
      break;
    }
    for (int j = 0;; j++) {
      t = cur + j * y;
      if (t > m) {
        break;
      }
      mx = max(mx, t);
    }
  }

  cout << mx << '\n';

  return 0;
}
