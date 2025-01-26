// problem: 팰린드롬
// id: 8892
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

bool fn(string s) {
  int iter = s.length(), hiter = iter / 2;
  for (int i = 0; i < hiter; i++) {
    if (s[i] != s[iter - i - 1]) {
      return false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vs v(n);
    bool chk = false;
    for (auto &i : v)
      cin >> i;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        string a = v[i] + v[j], b = v[j] + v[i];
        if (fn(a)) {
          cout << a << '\n';
          chk = true;
          break;
        }
        if (fn(b)) {
          cout << b << '\n';
          chk = true;
          break;
        }
      }
      if (chk)
        break;
    }
    if (!chk)
      cout << "0\n";
  }

  return 0;
}
