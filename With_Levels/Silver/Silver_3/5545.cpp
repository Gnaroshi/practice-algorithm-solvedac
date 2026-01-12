// problem: 최고의 피자
// id: 5545
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

  int n, a, b, c;
  int tp, tc, ans;
  cin >> n >> a >> b >> c;
  vi d(n);
  for (auto &i : d) {
    cin >> i;
  }
  sort(d.begin(), d.end(), greater<>());
  ans = c / a;
  tp = a;
  tc = c;

  for (auto i : d) {
    tp += b;
    tc += i;
    ans = max(ans, tc / tp);
  }

  cout << ans << '\n';

  return 0;
}
