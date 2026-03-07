// problem: 수열과 시프트 쿼리
// id: 17499
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

  int n, q, idx = 0, op, s, ad, x;
  cin >> n >> q;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  while (q--) {
    cin >> op;
    if (op == 1) {
      cin >> ad >> x;
      v[(idx + ad - 1) % n] += x;
    } else if (op == 2) {
      cin >> s;
      idx = (idx - s % n + n) % n;
    } else if (op == 3) {
      cin >> s;
      idx = (idx + s % n) % n;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << v[(idx + i) % n] << (i != n - 1 ? ' ' : '\n');
  }
  cout << '\n';

  return 0;
}
