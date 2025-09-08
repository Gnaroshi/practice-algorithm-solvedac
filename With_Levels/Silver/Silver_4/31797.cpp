// problem: 아~파트 아파트
// id: 31797
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

  int n, m, a, b, ans = 0;
  cin >> n >> m;
  vi chk(10001, 0);
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    chk[a] = chk[b] = i + 1;
  }

  n %= (m * 2);
  if (n == 0) {
    n = m * 2;
  }
  for (int i = 1;; i++) {
    if (chk[i] != 0) {
      n--;
      if (n == 0) {
        ans = chk[i];
        break;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
