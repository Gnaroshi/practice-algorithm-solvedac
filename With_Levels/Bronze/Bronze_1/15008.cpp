// problem: Falling Apart
// id: 15008
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

  int n, a = 0, b = 0;
  cin >> n;
  vi v(n);
  for (auto &i : v)
    cin >> i;

  sort(v.begin(), v.end(), greater<>());

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      a += v[i];
    else
      b += v[i];
  }

  cout << a << ' ' << b << '\n';

  return 0;
}
