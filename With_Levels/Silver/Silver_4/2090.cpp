// problem: 조화평균
// id: 2090
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

  ll n, dn = 1, nm = 0, g;
  cin >> n;
  vll v(n);
  for (auto &i : v) {
    cin >> i;
    dn *= i;
  }
  for (auto i : v) {
    nm += (dn / i);
  }

  g = gcd(nm, dn);
  cout << dn / g << "/" << nm / g << '\n';

  return 0;
}
