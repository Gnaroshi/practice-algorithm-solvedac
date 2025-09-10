// problem: 피자
// id: 3213
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

  int n, ca = 0, cb = 0, cc = 0, cnt = 0;
  cin >> n;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s[2] == '2') {
      ca++;
    } else if (s[0] == '3') {
      cc++;
    } else {
      cb++;
    }
  }

  cnt += cc;
  cb -= cc;

  if (ca > 0 && cb > 0) {
    int t = min(ca, cb / 2);
    cnt += t;
    ca -= t;
    cb -= t * 2;
    if (cb > 0) {
      cnt += cb;
      ca -= cb;
      cb = 0;
    }
  }

  if (ca > 0) {
    cnt += ca / 2 + (ca % 2);
  }

  if (cb > 0) {
    cnt += cb / 4;
    if (cb % 4 != 0) {
      cnt++;
    }
  }

  cout << cnt << '\n';

  return 0;
}
