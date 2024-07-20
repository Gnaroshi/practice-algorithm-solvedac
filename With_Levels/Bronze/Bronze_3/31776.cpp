// problem: 예비 소집 결과 보고서
// id: 31776
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = 0;
  cin >> n;
  while (n--) {
    vi a(3), b(3);
    int val = 0;
    for (int i = 0; i < 3; i++) {
      int t;
      cin >> t;
      if (t == -1) {
        t = (i + 1) * 10000;
        val++;
      }
      a[i] = b[i] = t;
    }
    if (val == 3)
      continue;
    sort(b.begin(), b.end());
    bool chk = true;
    for (int i = 0; i < 3; i++) {
      if (b[i] != a[i]) {
        chk = false;
        break;
      }
    }
    ans += chk;
  }
  cout << ans << '\n';

  return 0;
}
