// problem: 평행 우주
// id: 17451
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
  ll ans;
  vll v(n);
  for (auto &i : v) {
    cin >> i;
  }
  ans = v.back();
  for (int i = n - 2; i >= 0; i--) {
    if (v[i] > ans) {
      ans = v[i];
    } else {
      if (ans % v[i]) {
        ans = (ans / v[i] + 1) * v[i];
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
