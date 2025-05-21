// problem: 피보나치 수 7
// id: 15624
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

  ll MOD = 1000000007, a = 0, b = 1, t;
  int n;
  cin >> n;
  if (n == 0) {
    cout << 0 << '\n';
  } else if (n == 1) {
    cout << 1 << '\n';
  } else {
    for (int i = 2; i <= n; i++) {
      t = a + b;
      t %= MOD;
      a = b;
      b = t;
    }
    cout << t << "\n";
  }

  return 0;
}
