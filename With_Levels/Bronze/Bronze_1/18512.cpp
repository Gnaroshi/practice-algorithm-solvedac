// problem: 점프 점프
// id: 18512
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

  int x, y, a, b;
  cin >> x >> y >> a >> b;

  int ans = -1;
  for (int i = 0; i < 1000; i++) {
    for (int j = 0; j < 1000; j++) {
      if (i * x + a == j * y + b) {
        if (ans == -1) {
          ans = 0x3f3f3f3f;
        }
        ans = min(ans, i * x + a);
      }
    }
  }
  for (int i = 0; i < 1000; i++) {
    for (int j = 0; j < 1000; j++) {
      if (j * x + a == i * y + b) {
        if (ans == -1) {
          ans = 0x3f3f3f3f;
        }
        ans = min(ans, j * x + a);
      }
    }
  }
  cout << ans << '\n';

  return 0;
}
