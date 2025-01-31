// problem: 사탕
// id: 11256
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, j, a, b;
    cin >> j >> n;
    vi v;
    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      v.push_back(a * b);
    }
    sort(v.begin(), v.end(), greater<>());
    int ans = 0;
    for (auto &i : v) {
      j -= i;
      ans++;
      if (j <= 0) {
        break;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
