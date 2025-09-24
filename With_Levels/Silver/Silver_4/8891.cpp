// problem: 점 숫자
// id: 8891
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

  int tc;
  cin >> tc;
  const int SZ = 30001;
  vi v(SZ, 0);
  v[1] = 1;
  for (int i = 2; i < SZ; i++) {
    v[i] = v[i - 1] + i - 1;
  }
  while (tc--) {
    int x = 0, y = 0;
    for (int i = 0; i < 2; i++) {
      int t, vy, tx, ty;
      cin >> t;
      vy = upper_bound(v.begin(), v.end(), t) - v.begin() - 1;
      tx = t - v[vy] + 1;
      ty = vy - (t - v[vy]);
      x += tx;
      y += ty;
    }

    cout << v[x + y - 1] + x - 1 << '\n';
  }

  return 0;
}
