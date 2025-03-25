// problem: 최후의 승자는 누구?
// id: 12760
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

  int n, m;
  cin >> n >> m;
  vvi v(n, vi(m));
  vi ans(n, 0);
  for (auto &i : v) {
    for (auto &j : i) {
      cin >> j;
    }
    sort(i.begin(), i.end(), greater<>());
  }

  for (int i = 0; i < m; i++) {
    int mx = 0;
    for (int j = 0; j < n; j++) {
      mx = max(mx, v[j][i]);
    }
    for (int j = 0; j < n; j++) {
      if (v[j][i] == mx) {
        ans[j]++;
      }
    }
  }

  int ansmx = *max_element(ans.begin(), ans.end());
  vi wn;
  for (int i = 0; i < n; i++) {
    if (ansmx == ans[i]) {
      wn.push_back(i + 1);
    }
  }

  int iter = wn.size();
  for (int i = 0; i < iter; i++) {
    cout << wn[i] << (i != iter - 1 ? ' ' : '\n');
  }

  return 0;
}
