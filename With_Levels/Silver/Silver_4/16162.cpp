// problem: 가희와 3단 고음
// id: 16162
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

  int n, a, d, mx = 0;
  cin >> n >> a >> d;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  for (int i = 0; i < n; i++) {
    if (v[i] == a) {
      int tcnt = 1, cur = a;
      for (int j = i + 1; j < n; j++) {
        if (v[j] == cur + d) {
          cur += d;
          tcnt++;
        }
      }
      mx = max(mx, tcnt);
    }
  }
  cout << mx << '\n';

  return 0;
}
