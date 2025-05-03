// problem: DNA
// id: 1969
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

  int n, l, hd = 0;
  cin >> n >> l;
  vs v(n);
  char gs[4] = {'A', 'C', 'G', 'T'};
  string ans = "";
  for (auto &i : v) {
    cin >> i;
  }

  for (int i = 0; i < l; i++) {
    vi cnt(4, 0);
    for (int j = 0; j < n; j++) {
      for (int g = 0; g < 4; g++) {
        if (v[j][i] == gs[g]) {
          cnt[g]++;
          break;
        }
      }
    }
    int mx = cnt[0], mxl = 0;
    for (int g = 1; g < 4; g++) {
      if (mx < cnt[g]) {
        mx = cnt[g];
        mxl = g;
      }
    }
    ans += gs[mxl];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      if (v[i][j] != ans[j]) {
        hd++;
      }
    }
  }

  cout << ans << '\n';
  cout << hd << '\n';

  return 0;
}
