// problem: 자전거 묘기
// id: 25706
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

  int n;
  cin >> n;
  vi v(n), ans(n);
  for (auto &i : v) {
    cin >> i;
  }
  ans[n - 1] = 1;

  for (int i = n - 2; i >= 0; i--) {
    if (v[i] == 0) {
      ans[i] = ans[i + 1] + 1;
    } else {
      if (v[i] + i + 1 >= n) {
        ans[i] = 1;
      } else {
        ans[i] = ans[v[i] + i + 1] + 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
