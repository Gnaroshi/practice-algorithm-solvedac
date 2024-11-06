// problem: 대형 스크린
// id: 3566
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

  int rh, rv, sh, sv;
  int trh, trv, tsh, tsv, tp;
  int ans = 0x3f3f3f3f, n;

  cin >> rh >> rv >> sh >> sv >> n;
  while (n--) {
    cin >> trh >> trv >> tsh >> tsv >> tp;
    int rr = (rh / trh) + (rh % trh != 0);
    int rc = (rv / trv) + (rv % trv != 0);
    int sr = (sh / tsh) + (sh % tsh != 0);
    int sc = (sv / tsv) + (sv % tsv != 0);
    rr = max(rr, sr), rc = max(rc, sc);
    ans = min(ans, rr * rc * tp);

    swap(trh, trv);
    swap(tsh, tsv);
    rr = (rh / trh) + (rh % trh != 0);
    rc = (rv / trv) + (rv % trv != 0);
    sr = (sh / tsh) + (sh % tsh != 0);
    sc = (sv / tsv) + (sv % tsv != 0);
    rr = max(rr, sr), rc = max(rc, sc);
    ans = min(ans, rr * rc * tp);
  }

  cout << ans << '\n';

  return 0;
}
