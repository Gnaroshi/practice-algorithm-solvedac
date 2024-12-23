// problem: Base Conversion
// id: 11576
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

  ll a, b, m;
  cin >> a >> b >> m;
  ll t, sum = 0, mul = 1;
  for (int i = 1; i < m; i++)
    mul *= a;
  vi ans;
  for (int i = 0; i < m; i++) {
    cin >> t;
    sum += mul * t;
    mul /= a;
  }

  while (sum > 0) {
    ans.push_back(sum % b);
    sum /= b;
  }

  reverse(ans.begin(), ans.end());
  for (auto &i : ans)
    cout << i << ' ';

  return 0;
}
