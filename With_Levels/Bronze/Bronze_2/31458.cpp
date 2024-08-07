// problem: !!초콜릿 중독 주의!!
// id: 31458
// tag:
// time taken:

#include <algorithm>
#include <cctype>
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

  int tc;
  cin >> tc;
  while (tc--) {
    string s, sa, sb;
    cin >> s;
    int a, n, b, iter = s.length();
    bool chk = false;
    for (int i = 0; i < iter; i++) {
      if (isdigit(s[i])) {
        n = i;
        break;
      }
    }
    sa = s.substr(0, n);
    sb = s.substr(n + 1);
    a = sa.length();
    b = sb.length();
    n = s[n] - '0';

    if (b) {
      n = 1;
    }

    if (a % 2) {
      n = !n;
    }
    cout << n << '\n';
  }

  return 0;
}
