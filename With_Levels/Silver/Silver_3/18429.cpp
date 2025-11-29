// problem: 슨손실
// id: 18429
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

int n, k, a, ans = 0;
vi v;
vb chk;

void fn(int cur, int d) {
  if (d == n) {
    ans++;
    return;
  }

  for (int i = 0; i < n; i++) {
    if (chk[i]) {
      if (cur + v[i] - k >= 500) {
        chk[i] = false;
        fn(cur + v[i] - k, d + 1);
        chk[i] = true;
      }
    }
  }

  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;
  v.resize(n);
  chk.resize(n, true);
  for (auto &i : v) {
    cin >> i;
  }
  fn(500, 0);

  cout << ans << "\n";

  return 0;
}
