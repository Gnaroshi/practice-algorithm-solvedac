// problem: 스케이트 연습
// id: 28324
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

  ll n, mx = 0;
  cin >> n;
  vll v(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }

  for (int i = n; i > 0; i--) {
    v[i] = min(v[i + 1] + 1, v[i]);
  }

  // for (auto i : v) {
  //   cout << i << ' ';
  // }
  // cout << '\n';

  for (int i = 1; i <= n; i++) {
    mx += v[i];
  }

  cout << mx << '\n';

  return 0;
}
