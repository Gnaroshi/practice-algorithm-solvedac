// problem: 피보나치 수의 확장
// id: 1788
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

  const ll mod = 1000000000;
  ll n, a = 0, b = 1, iter, t;
  cin >> n;
  iter = abs(n);
  for (int i = 2; i <= iter; i++) {
    t = (a + b) % mod;
    a = b;
    b = t;
  }

  if (n % 2 == 0 && n < 0) {
    cout << "-1\n";
  } else if (n == 0) {
    cout << "0\n";
    t = a;
  } else {
    cout << "1\n";
  }
  if (iter == 1) {
    t = 1;
  }
  cout << abs(t) % mod << '\n';

  return 0;
}
