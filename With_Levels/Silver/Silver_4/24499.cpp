// problem: blobyum
// id: 24499
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

  int n, k, mx = 0, cur = 0;
  cin >> n >> k;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  for (int i = 0; i < k; i++) {
    cur += v[i];
  }

  mx = max(mx, cur);
  for (int i = 0; i < n; i++) {
    cur -= v[i];
    cur += v[(k + i) % n];
    mx = max(mx, cur);
  }

  cout << mx << '\n';

  return 0;
}
