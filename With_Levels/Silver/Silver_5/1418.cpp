// problem: K-세준수
// id: 1418
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

  int n, k, ans = 0;
  cin >> n >> k;

  vb isp(n + 1, true), tchk(n + 1, true);

  int iter = sqrt(n);
  for (int i = 2; i <= iter; i++) {
    if (isp[i]) {
      for (int j = 2 * i; j <= n; j += i) {
        isp[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (isp[i] && i > k) {
      for (int j = i; j <= n; j += i) {
        tchk[j] = false;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    if (tchk[i])
      ans++;
  }

  cout << ans << '\n';

  return 0;
}
