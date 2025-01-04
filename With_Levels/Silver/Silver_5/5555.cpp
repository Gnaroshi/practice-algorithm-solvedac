// problem: 반지
// id: 5555
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

  string tar, s, t;
  int n, ans = 0, tarl;
  cin >> tar >> n;
  tarl = tar.length();

  while (n--) {
    cin >> s;
    t = s;
    for (int i = 0; i < 10; i++) {
      if (t.substr(0, tarl) == tar) {
        ans++;
        break;
      }
      t = t.substr(1, 9) + t[0];
    }
  }

  cout << ans << '\n';

  return 0;
}
