// problem: 사탕
// id: 1812
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

  int n;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  for (int i = 0;; i++) {
    bool chk = true;
    int cur = i, nxt;
    for (int j = 0; j < n - 1; j++) {
      cur = v[j] - cur;
      if (cur < 0) {
        chk = false;
        break;
      }
    }
    if (v[n - 1] != cur + i) {
      chk = false;
    }

    if (chk) {
      int cur = i;
      cout << cur << '\n';
      for (int j = 0; j < n - 1; j++) {
        cur = v[j] - cur;
        cout << cur << "\n";
      }
      break;
    }
  }

  return 0;
}
