// problem: 금화
// id: 2223
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

  int t, x, m, d, s;
  cin >> t >> x >> m;

  int mnt = 0x3f3f3f3f;
  bool chk = false;
  for (int i = 0; i < m; i++) {
    cin >> d >> s;
    if (s > 0) {
      mnt = min(mnt, (d - 1) / s);
    }
  }

  if (mnt == 0) {
    cout << mnt * x << '\n';
  } else if (t > mnt) {
    cout << (mnt + (t - mnt) / 2) * x << '\n';
  } else {
    cout << t * x << '\n';
  }

  return 0;
}
