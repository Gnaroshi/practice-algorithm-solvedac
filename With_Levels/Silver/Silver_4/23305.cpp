// problem: 수강변경
// id: 23305
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

  int n, t, cnt = 0;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> t;
    mp[t]++;
  }

  for (int i = 0; i < n; i++) {
    cin >> t;
    if (mp.find(t) == mp.end() || mp[t] == 0) {
      cnt++;
    } else {
      mp[t]--;
    }
  }

  cout << cnt << '\n';

  return 0;
}
