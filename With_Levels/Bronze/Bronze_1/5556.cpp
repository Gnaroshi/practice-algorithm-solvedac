// problem: 타일
// id: 5556
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

  int n, k, a, b, ans;
  cin >> n >> k;

  for (int i = 0; i < k; i++) {
    cin >> a >> b;
    a = min(a, n - a + 1);
    b = min(b, n - b + 1);
    ans = min(a, b) % 3;
    if (ans == 0)
      ans = 3;
    cout << ans << '\n';
  }

  return 0;
}
