// problem: 꿀 아르바이트
// id: 12847
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

  ll n, m, mx = 0;
  cin >> n >> m;
  vll v(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }

  for (int i = m; i <= n; i++) {
    mx = max(mx, v[i] - v[i - m]);
  }

  cout << mx << '\n';

  return 0;
}
