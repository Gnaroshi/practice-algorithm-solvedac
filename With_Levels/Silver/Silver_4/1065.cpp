// problem: 한수
// id: 1065
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

int fn(int n) {
  vi t;
  while (n > 0) {
    t.push_back(n % 10);
    n /= 10;
  }

  bool chk = true;
  int dif = t[1] - t[0];
  int iter = t.size();
  for (int i = 2; i < iter; i++) {
    if (t[i] - t[i - 1] != dif) {
      chk = false;
      break;
    }
  }
  return (chk ? 1 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i < 100) {
      ans++;
    } else {
      ans += fn(i);
    }
  }

  cout << ans << '\n';

  return 0;
}
