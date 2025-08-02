// problem: 물건 팔기
// id: 1487
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

  int n, mx = 0, ans = 0;
  cin >> n;
  vpi v(n);
  for (auto &i : v) {
    cin >> i.first >> i.second;
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    int tmx = 0;
    for (int j = i; j < n; j++) {
      int t = v[i].first - v[j].second;
      if (t > 0) {
        tmx += t;
      }
    }
    if (mx < tmx) {
      mx = tmx;
      ans = v[i].first;
    }
  }

  cout << ans << '\n';

  return 0;
}
