// problem: 치킨 TOP N
// id: 11582
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

  ll n, k, cur, div;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }
  cin >> k;
  cur = n;

  while (cur) {
    cur /= 2;
    div = n / cur;
    for (ll i = 0; i < n; i += div) {
      sort(v.begin() + i, v.begin() + i + div);
    }
    if (cur == k) {
      break;
    }
  }

  for (ll i = 0; i < n; i++) {
    cout << v[i] << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
