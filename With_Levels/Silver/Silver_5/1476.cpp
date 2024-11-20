// problem: 날짜 계산
// id: 1476
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

  int e, s, m;
  cin >> e >> s >> m;
  int se = 1, ss = 1, sm = 1, ans = 1;
  while (true) {
    if (se == e && ss == s && sm == m) {
      cout << ans << '\n';
      break;
    }
    se++, ss++, sm++;
    ans++;
    if (se == 16)
      se = 1;
    if (ss == 29)
      ss = 1;
    if (sm == 20)
      sm = 1;
  }

  return 0;
}
