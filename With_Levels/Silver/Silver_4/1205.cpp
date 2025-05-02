// problem: 등수 구하기
// id: 1205
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

  int n, is, p, r = 1, cnt = 1, t;
  cin >> n >> is >> p;
  if (n == 0) {
    cout << 1 << '\n';
    return 0;
  }
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }
  if (n == p && v[n - 1] >= is) {
    cout << -1 << '\n';
  } else {
    t = n + 1;
    for (int i = 0; i < n; i++) {
      if (v[i] <= is) {
        t = i + 1;
        break;
      }
    }
    cout << t << '\n';
  }

  return 0;
}
