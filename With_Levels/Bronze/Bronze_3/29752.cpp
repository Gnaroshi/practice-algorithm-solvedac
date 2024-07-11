// problem: 최장 스트릭
// id: 29752
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans, t, ts;
  ans = ts = 0;
  cin >> n;
  while (n--) {
    cin >> t;
    if (t != 0) {
      ts++;
    } else {
      ans = max(ans, ts);
      ts = 0;
    }
  }

  ans = max(ans, ts);
  cout << ans << '\n';

  return 0;
}