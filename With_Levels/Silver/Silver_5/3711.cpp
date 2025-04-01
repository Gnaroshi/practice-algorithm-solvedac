// problem: 학번
// id: 3711
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
    int n, t;
    cin >> n;
    vi v(n);
    for (auto &i : v) {
      cin >> i;
    }
    if (n == 1) {
      cout << 1 << '\n';
      continue;
    }

    for (int m = 2;; m++) {
      vb chk(m, false);
      bool anschk = true;
      for (auto i : v) {
        t = i % m;
        if (chk[t]) {
          anschk = false;
          break;
        }
        chk[t] = true;
      }

      if (anschk) {
        cout << m << '\n';
        break;
      }
    }
  }

  return 0;
}
