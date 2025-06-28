// problem: 30번
// id: 13116
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

  int tc;
  cin >> tc;
  while (tc--) {
    int a, b;
    cin >> a >> b;
    if (a == b) {
      cout << a * 10 << '\n';
      continue;
    }
    vb chka(1024, false), chkb(1024, false);
    chka[a] = true;
    chkb[b] = true;

    while (a > 0) {
      a /= 2;
      chka[a] = true;
    }
    while (b > 0) {
      b /= 2;
      chkb[b] = true;
    }
    for (int i = 1023; i >= 1; i--) {
      if (chka[i] && chkb[i]) {
        cout << i * 10 << '\n';
        break;
      }
    }
  }

  return 0;
}
