// problem: 마트료시카 합치기
// id: 25631
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

  int n;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());
  int mx = 1, cur = 1, bef = v.front();
  for (int i = 1; i < n; i++) {
    if (bef != v[i]) {
      mx = max(mx, cur);
      cur = 1;
    } else {
      cur++;
    }
    bef = v[i];
  }

  mx = max(mx, cur);
  cout << mx << '\n';

  return 0;
}
