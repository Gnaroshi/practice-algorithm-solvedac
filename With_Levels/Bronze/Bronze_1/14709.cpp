// problem: 여우 사인
// id: 14709
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

  int n, a, b;
  cin >> n;
  vb chk(3, false);
  bool ans = true;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    int mx, mn;
    mx = max(a, b);
    mn = min(a, b);
    if (mn == 1) {
      if (mx == 3) {
        chk[0] = true;
      } else if (mx == 4) {
        chk[1] = true;
      } else
        ans = false;
    } else if (mn == 3) {
      if (mx == 4) {
        chk[2] = true;
      } else
        ans = false;
    } else
      ans = false;
  }
  if (ans) {
    for (auto i : chk) {
      if (!i)
        ans = false;
    }
  }
  cout << (ans ? "Wa-pa-pa-pa-pa-pa-pow!\n" : "Woof-meow-tweet-squeek\n");

  return 0;
}
