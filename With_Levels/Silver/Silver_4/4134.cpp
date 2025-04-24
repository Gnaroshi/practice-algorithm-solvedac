// problem: 다음 소수
// id: 4134
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

bool chkfn(ll n) {
  if (n < 2) {
    return false;
  } else if (n == 2 || n == 3 || n == 5 || n == 7) {
    return true;
  } else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
    return false;
  } else {
    for (ll i = 11; i * i <= n; i++) {
      if (n % i == 0 || n % (i + 2) == 0) {
        return false;
      }
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  ll n, ans;
  cin >> tc;
  while (tc--) {
    cin >> n;
    while (!chkfn(n)) {
      n++;
    }
    cout << n << '\n';
  }

  return 0;
}
