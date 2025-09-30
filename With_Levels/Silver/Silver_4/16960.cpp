// problem: 스위치와 램프
// id: 16960
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

  int n, m, t, lmp;
  cin >> n >> m;
  bool ans = false;

  vvi v(n);
  for (int i = 0; i < n; i++) {
    cin >> t;
    for (int j = 0; j < t; j++) {
      cin >> lmp;
      v[i].push_back(lmp);
    }
  }

  for (int i = 0; i < n; i++) {
    vb chk(m + 1, false);
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }
      for (auto k : v[j]) {
        chk[k] = true;
      }
    }

    bool tchk = true;
    for (int j = 1; j <= m; j++) {
      if (!chk[j]) {
        tchk = false;
        break;
      }
    }
    if (tchk) {
      ans = true;
      break;
    }
  }

  cout << ans << "\n";

  return 0;
}
