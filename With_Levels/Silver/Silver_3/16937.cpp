// problem: 두 스티커
// id: 16937
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

bool fn(int ra, int ca, int rb, int cb, int h, int w) {
  bool ret = true;
  if (ra + rb > w && ca + cb > h) {
    ret = false;
  }
  if (ra > w || rb > w || ca > h || cb > h) {
    ret = false;
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, w, n, ans = 0;
  cin >> h >> w >> n;
  vvi pp = {{h, w}, {w, h}};
  vpi v(n);
  bool chk;
  for (auto &i : v) {
    cin >> i.first >> i.second;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }
      chk = false;

      for (int k = 0; k < 2; k++) {
        if (fn(v[i].first, v[i].second, v[j].first, v[j].second, pp[k][0],
               pp[k][1])) {
          chk = true;
        } else if (fn(v[i].first, v[i].second, v[j].second, v[j].first,
                      pp[k][1], pp[k][0])) {
          chk = true;
        } else if (fn(v[i].second, v[i].first, v[j].first, v[j].second,
                      pp[k][1], pp[k][0])) {
          chk = true;
        }
      }
      if (chk) {
        ans = max(ans, v[i].first * v[i].second + v[j].first * v[j].second);
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
