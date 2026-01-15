// problem: 화살표 그리기
// id: 15975
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

  int n, x, y;
  ll ans = 0;
  map<int, vi> mp;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    mp[y].push_back(x);
  }

  for (auto i : mp) {
    int iter = i.second.size();
    if (iter == 1) {
      continue;
    }
    vi t;
    t = i.second;
    sort(t.begin(), t.end());
    ans += t[1] - t[0];
    ans += t[iter - 1] - t[iter - 2];
    iter--;
    for (int i = 1; i < iter; i++) {
      ans += min(t[i] - t[i - 1], t[i + 1] - t[i]);
    }
  }

  cout << ans << "\n";

  return 0;
}
