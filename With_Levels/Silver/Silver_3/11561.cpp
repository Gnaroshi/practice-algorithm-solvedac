// problem: 징검다리
// id: 11561
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
    unsigned long long n;
    cin >> n;
    unsigned long long l = 1, r = n, m;
    while (l <= r) {
      m = (l + r) / 2;
      if (m * (m + 1) / 2 <= n) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }
    cout << r << "\n";
  }

  return 0;
}
