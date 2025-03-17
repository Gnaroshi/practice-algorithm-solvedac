// problem: Sport Climbing Combined
// id: 23246
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

  int n, ts, tm, t;
  cin >> n;
  // mul, sum, num
  vector<pair<pair<int, int>, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].second;
    tm = 1, ts = 0;
    for (int j = 0; j < 3; j++) {
      cin >> t;
      tm *= t;
      ts += t;
    }
    v[i].first.first = tm;
    v[i].first.second = ts;
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < 3; i++) {
    cout << v[i].second << (i != 2 ? ' ' : '\n');
  }

  return 0;
}
