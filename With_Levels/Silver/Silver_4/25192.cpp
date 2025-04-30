// problem: 인사성 밝은 곰곰이
// id: 25192
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

  int n, ans = 0;
  cin >> n;
  string t;
  map<string, bool> mp;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t == "ENTER") {
      mp.clear();
    } else {
      if (mp.find(t) == mp.end()) {
        mp[t] = true;
        ans++;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
