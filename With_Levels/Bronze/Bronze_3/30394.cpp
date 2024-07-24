// problem: 회전하지 않는 캘리퍼스
// id: 30394
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

  ll n, x, y, mny, mxy;
  mny = 0x3f3f3f3f, mxy = -0x3f3f3f3f;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    mny = min(mny, y);
    mxy = max(mxy, y);
  }

  cout << mxy - mny << '\n';

  return 0;
}
