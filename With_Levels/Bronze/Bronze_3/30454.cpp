// problem: 얼룩말을 찾아라!
// id: 30454
// tag:
// time taken:

#include <algorithm>
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

  int n, l, mx = 0, ans = 0;
  vector<string> v;
  string s;
  cin >> n >> l;
  for (int i = 0; i < n; i++) {
    cin >> s;
    v.push_back(s);
    int cnt = 0;
    bool chk = false;
    for (auto j : s) {
      if (j == '1') {
        if (!chk) {
          chk = true;
          cnt++;
        }
      } else
        chk = false;
    }
    mx = max(cnt, mx);
  }

  for (const auto &i : v) {
    int cnt = 0;
    bool chk = false;
    for (auto j : i) {
      if (j == '1') {
        if (!chk) {
          chk = true;
          cnt++;
        }
      } else
        chk = false;
    }
    if (mx == cnt) {
      ans++;
    }
  }
  cout << mx << ' ' << ans << '\n';

  return 0;
}
