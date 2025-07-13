// problem: 복권
// id: 1359
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

const int SZ = 9;
vi f(SZ, 1);

int fn(int n) {
  if (n >= 1) {
    return f[n];
  }
  return 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 1; i <= SZ; i++) {
    f[i] = f[i - 1] * i;
  }
  int n, m, k;
  cin >> n >> m >> k;

  double a = 0, b = f[n] / (f[m] * f[n - m]);
  for (int i = k; i <= m; i++) {
    a += ((fn(m) / (fn(i) * fn(m - i))) *
          (fn(n - m) / (fn(m - i) * fn(n - m - m + i))));
  }

  cout.precision(10);
  cout << a / b << '\n';

  return 0;
}
