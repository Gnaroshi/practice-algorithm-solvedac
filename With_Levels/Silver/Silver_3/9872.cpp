// problem: Record Keeping
// id: 9872
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
using vvs = vector<vs>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = 0, t;
  cin >> n;
  vvs v;
  for (int i = 0; i < n; i++) {
    vs vt(3);
    for (auto &j : vt) {
      cin >> j;
    }

    sort(vt.begin(), vt.end());
    v.push_back(vt);
  }

  for (int i = 0; i < n; i++) {
    t = 0;
    for (int j = 0; j < n; j++) {
      if (v[i][0] == v[j][0] && v[i][1] == v[j][1] && v[i][2] == v[j][2]) {
        t++;
      }
    }
    ans = max(ans, t);
  }

  cout << ans << "\n";

  return 0;
}
