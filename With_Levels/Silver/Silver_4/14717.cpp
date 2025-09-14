// problem: 앉았다
// id: 14717
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

  int a, b, c;
  double nm = 0, dn = 153;
  cin >> a >> b;

  if (a == b) {
    nm = (dn - 10 + a);
  } else {
    c = (a + b) % 10;
    for (int i = 1; i <= 10; i++) {
      for (int j = i + 1; j <= 10; j++) {
        if (c > (i + j) % 10) {
          if (i == a && j == b) {
            continue;
          } else if ((i == a || j == a) || (i == b || j == b)) {
            nm += 2;
          } else {
            nm += 4;
          }
        }
      }
    }
  }
  cout.precision(3);
  cout << fixed;
  cout << (nm / dn) << '\n';

  return 0;
}
