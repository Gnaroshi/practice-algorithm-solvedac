// problem: 좋은 구간
// id: 1059
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

  int l, t, n;
  cin >> l;
  vi v(l);
  for (auto &i : v) {
    cin >> i;
  }
  cin >> n;
  int mx = 0, mn = 1001;
  sort(v.begin(), v.end());
  for (auto i : v) {
    if (i == n) {
      cout << "0\n";
      return 0;
    }
    if (i < n) {
      mx = max(mx, i);
    } else {
      mn = i;
      break;
    }
  }

  cout << (mn - n) * (n - mx) - 1 << '\n';

  return 0;
}
