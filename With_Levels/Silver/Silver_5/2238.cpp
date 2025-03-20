// problem: 경매
// id: 2238
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

  int u, n, mn = 0x3f3f3f3f;
  cin >> u >> n;

  vector<pair<string, int>> v(n);
  vi cnt(u + 1);
  string s;
  int pr;

  int mnloc = -1, mncnt = 0x3f3f3f3f;
  for (int i = 0; i < n; i++) {
    cin >> s >> pr;
    v[i] = {s, pr};
    cnt[pr]++;
  }

  for (int i = 1; i <= u; i++) {
    if (cnt[i] != 0 && mncnt > cnt[i]) {
      mncnt = cnt[i];
      mnloc = i;
    }
  }

  for (auto &i : v) {
    if (i.second == mnloc) {
      cout << i.first << ' ' << i.second << '\n';
      break;
    }
  }

  return 0;
}
