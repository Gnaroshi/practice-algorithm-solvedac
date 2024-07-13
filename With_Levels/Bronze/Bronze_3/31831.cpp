// problem: 과민성 대장 증후군
// id: 31831
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

  int n, m, ans = 0, a;
  cin >> n >> m;
  ll cur = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    cur += a;
    if (cur >= m)
      ans++;
    cur = max(0LL, cur);
  }
  cout << ans << "\n";

  return 0;
}
