// problem: Promotion Counting
// id: 11976
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

  vi a(4), b(4);
  int as = 0, bs = 0;
  for (int i = 0; i < 4; i++) {
    cin >> a[i] >> b[i];
    as += a[i], bs += b[i];
  }

  a[0] += max(0, bs - as);

  for (int i = 0; i < 3; i++) {
    int t = a[i] - b[i];
    a[i + 1] += t;
    cout << t << '\n';
  }

  return 0;
}
