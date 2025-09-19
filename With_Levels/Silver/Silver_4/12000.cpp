// problem: Circular Barn (Bronze)
// id: 12000
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

  int n, mn = 0x3f3f3f3f;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  for (int i = 0; i < n; i++) {
    int cnt = 0;

    for (int j = 0; j < n; j++) {
      if (j >= i) {
        cnt += (j - i) * v[j];
      } else {
        cnt += (j - i + n) * v[j];
      }
    }
    mn = min(mn, cnt);
  }
  cout << mn << '\n';

  return 0;
}
