// problem: 새로운 문자열 만들기
// id: 30089
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
    string a, b, ans, t;
    int al, bl;
    cin >> a;
    al = a.length();
    bl = al;
    if (al == 1) {
      cout << a << '\n';
      continue;
    }
    b = a;
    reverse(b.begin(), b.end());
    for (int i = 0; i < al; i++) {
      b = b.substr(1, bl--);
      t = a + b;
      int tl = t.length(), tlh = tl / 2;
      bool chk = true;
      for (int j = 0; j < tlh; j++) {
        if (t[j] != t[tl - j - 1]) {
          chk = false;
          break;
        }
      }

      if (chk) {
        ans = t;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
