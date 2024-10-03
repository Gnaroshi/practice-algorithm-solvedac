// problem: 기념일 2
// id: 10426
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tm[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  stringstream st;
  string s;
  int n, y, m, d;
  cin >> s >> n;
  for (auto &i : s) {
    if (i == '-')
      i = ' ';
  }
  st.str(s);
  st >> y >> m >> d;
  for (int i = 1; i < n; i++) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
      tm[1] = 29;
    else
      tm[1] = 28;
    d++;
    if (d > tm[m - 1]) {
      d = 1;
      m++;
      if (m == 13) {
        y++;
        m = 1;
      }
    }
  }

  string ans = to_string(y);
  ans += '-';
  if (m < 10)
    ans += '0';
  ans += to_string(m);
  ans += '-';
  if (d < 10)
    ans += '0';
  ans += to_string(d);

  cout << ans << '\n';

  return 0;
}
