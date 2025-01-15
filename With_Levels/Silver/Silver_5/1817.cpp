// problem: 짐 챙기는 숌
// id: 1817
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

  int n, m, ans = 0, cur = 0, t;
  cin >> n >> m;
  if (n == 0) {
    cout << ans << "\n";
    return 0;
  }
  ans = 1;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (cur + t > m) {
      ans++;
      cur = t;
    } else {
      cur += t;
    }
  }

  cout << ans << '\n';

  return 0;
}