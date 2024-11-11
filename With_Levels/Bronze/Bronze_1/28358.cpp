// problem: 생일 맞추기
// id: 28358
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

  int mth[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int tc;
  cin >> tc;
  while (tc--) {
    int ans = 0, t, m = 1, d = 1;
    vb chk(10);
    for (int i = 0; i < 10; i++) {
      cin >> t;
      chk[i] = (t == 0);
    }

    for (int i = 1; i <= 366; i++) {
      if ((m < 10 || chk[m / 10] == 1) && chk[m % 10] == 1) {
        if ((d < 10 || chk[d / 10]) == 1 && chk[d % 10] == 1)
          ans++;
      }

      d++;
      if (mth[m] < d) {
        d = 1;
        m++;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
