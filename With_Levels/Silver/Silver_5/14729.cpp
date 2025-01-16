// problem: 칠무해
// id: 14729
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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
  double t;
  vd v(7);

  for (auto &i : v)
    cin >> i;
  sort(v.begin(), v.end(), greater<>());
  for (int i = 7; i < n; i++) {
    cin >> t;
    if (v[0] <= t)
      continue;
    v[0] = t;
    sort(v.begin(), v.end(), greater<>());
  }

  cout.precision(3);
  cout << fixed;
  for (int i = 6; i >= 0; i--) {
    cout << v[i] << '\n';
  }

  return 0;
}
