// problem: 더블팰린드롬
// id: 32357
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

bool fn(string s) {
  int iter = s.length(), hiter = iter / 2;
  for (int i = 0; i < hiter; i++) {
    if (s[i] != s[iter - 1 - i])
      return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string s;
  cin >> n;

  vb chk(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> s;
    chk[i] = fn(s);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (!chk[i])
      continue;
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      if (chk[j])
        ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}
