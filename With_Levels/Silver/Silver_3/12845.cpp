// problem: 모두의 마블
// id: 12845
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

  int n, ans = 0;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }
  if (n == 1) {
    cout << "0\n";
    return 0;
  }

  int vl = v.size();
  while (true) {
    vl--;
    if (vl == 1) {
      ans += v[0] + v[1];
      break;
    }
    int mxl = (max_element(v.begin(), v.end()) - v.begin());
    int mx = v[mxl];
    if (mxl == 0) {
      ans += v[mxl] + v[mxl + 1];
      v[mxl + 1] = mx;
      v.erase(v.begin() + mxl);
    } else if (mxl == vl - 1) {
      ans += v[mxl - 1] + v[mxl];
      v[mxl - 1] = mx;
      v.erase(v.begin() + mxl);
    } else {
      if (v[mxl - 1] > v[mxl + 1]) {
        ans += v[mxl - 1] + v[mxl];
        v[mxl - 1] = mx;
        v.erase(v.begin() + mxl);
      } else {
        ans += v[mxl] + v[mxl + 1];
        v[mxl + 1] = mx;
        v.erase(v.begin() + mxl);
      }
    }
  }

  cout << ans << "\n";

  return 0;
}
