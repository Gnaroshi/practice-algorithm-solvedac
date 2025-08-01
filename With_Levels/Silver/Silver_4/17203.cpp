// problem: ∑|ΔEasyMAX|
// id: 17203
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

  int n, q, l, r;
  cin >> n >> q;
  vi a(n), b;
  for (auto &i : a) {
    cin >> i;
  }
  b.push_back(0);
  for (int i = 1; i < n; i++) {
    b.push_back(abs(a[i] - a[i - 1]));
    b[i] += b[i - 1];
  }

  for (int i = 0; i < q; i++) {
    cin >> l >> r;
    cout << max(0, b[r - 1] - b[l - 1]) << '\n';
  }

  return 0;
}
