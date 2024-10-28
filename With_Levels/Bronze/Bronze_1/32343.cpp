// problem: 드랍 더 비트
// id: 32343
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

int fn(int n) {
  int cnt = 0;
  while (n > 0) {
    if (n % 2)
      cnt++;
    n /= 2;
  }
  return cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int mx = 0, n, a, b, t;
  cin >> n >> a >> b;
  vi va, vb;

  int iter = (1 << n);
  for (int i = 0; i < iter; i++) {
    t = fn(i);
    if (a == t)
      va.push_back(i);
    if (b == t)
      vb.push_back(i);
  }

  // cout << iter << '\n';
  // cout << va.size() << ' ' << vb.size();

  for (auto i : va) {
    for (auto j : vb) {
      mx = max(mx, i ^ j);
    }
  }

  cout << mx << '\n';

  return 0;
}
