// problem: 욱제는 결정장애야!!
// id: 14646
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

  int n, mx = 0, cur = 0, iter, t;
  cin >> n;
  iter = 2 * n - 1;
  vb chk(n + 1, false);
  for (int i = 0; i < iter; i++) {
    cin >> t;
    if (chk[t]) {
      chk[t] = false;
      cur -= 1;
    } else {
      chk[t] = true;
      cur++;
    }
    mx = max(mx, cur);
  }

  cout << mx << '\n';

  return 0;
}
