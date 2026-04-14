// problem: 바이너리 왕국
// id: 16567
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

  int n, m, op, loc, tot = 0;
  cin >> n >> m;
  vb v(n);
  bool chk;
  for (int i = 0; i < n; i++) {
    cin >> chk;
    v[i] = chk;
  }
  chk = false;
  for (int i = 0; i < n; i++) {
    if (v[i] && !chk) {
      chk = true;
      tot++;
    } else if (!v[i] && chk) {
      chk = false;
    }
  }

  for (int i = 0; i < m; i++) {
    cin >> op;
    if (op == 0) {
      cout << tot << '\n';
    } else {
      cin >> loc;
      loc--;
      if (v[loc]) {
        continue;
      }
      if (loc == 0 && n != 1) {
        if (!v[loc + 1]) {
          tot++;
        }
      } else if (loc == n - 1 && n != 1) {
        if (!v[loc - 1]) {
          tot++;
        }
      } else {
        if (n > 2) {
          if (!v[loc - 1] && !v[loc + 1]) {
            tot++;
          } else if (v[loc - 1] && v[loc + 1]) {
            tot--;
          }
        }
      }
      v[loc] = true;
    }
  }

  return 0;
}
