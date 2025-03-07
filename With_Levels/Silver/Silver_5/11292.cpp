// problem: 키 큰 사람
// id: 11292
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
  while (true) {
    cin >> n;
    if (!n)
      break;
    double mx = -1.0, td;
    string ts;
    vector<pair<double, pair<int, string>>> v(n);
    for (int i = 0; i < n; i++) {
      cin >> ts >> td;
      v[i].first = td;
      v[i].second.first = i;
      v[i].second.second = ts;
      mx = max(mx, td);
    }

    sort(v.begin(), v.end(), greater<>());
    vector<pair<int, string>> ans;
    for (int i = 0; i < n; i++) {
      if (v[i].first < mx) {
        break;
      }
      ans.push_back({v[i].second.first, v[i].second.second});
    }
    sort(ans.begin(), ans.end());
    int iter = ans.size();
    for (int i = 0; i < iter; i++) {
      cout << ans[i].second << (i != iter - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
