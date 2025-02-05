// problem: 연도 진행바
// id: 1340
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
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

string mth[12] = {"January",   "February", "March",    "April",
                  "May",       "June",     "July",     "August",
                  "September", "October",  "November", "December"};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  tm a = {}, b = {}, c = {};
  int mt, d, y, h, m;
  string s, mtt;
  getline(cin, s);
  for (auto &i : s) {
    if (i == ',' || i == ':') {
      i = ' ';
    }
  }
  stringstream st;
  st.str(s);
  st >> mtt >> d >> y >> h >> m;

  for (int i = 0; i < 12; i++) {
    if (mth[i] == mtt) {
      mt = i;
      break;
    }
  }

  if (mt == 0 && d == 1 && h == 0 && m == 0) {
    cout << 0.0 << '\n';
    return 0;
  }

  a.tm_year = y - 1900;
  a.tm_mon = 0;
  a.tm_mday = 1;
  a.tm_hour = 0;
  a.tm_min = 0;
  a.tm_sec = 0;

  c.tm_year = y - 1900 + 1;
  c.tm_mon = 0;
  c.tm_mday = 1;
  c.tm_hour = 0;
  c.tm_min = 0;
  c.tm_sec = 0;

  b.tm_year = y - 1900;
  b.tm_mon = mt;
  b.tm_mday = d;
  b.tm_hour = h;
  b.tm_min = m;
  b.tm_sec = 0;

  // cout << s << '\n';
  // cout << mt << ' ' << d << ' ' << y << ' ' << h << ' ' << m << '\n';

  time_t at = mktime(&a);
  time_t bt = mktime(&b);
  time_t ct = mktime(&c);

  // cout << at << '\n';
  // cout << bt << '\n';
  // cout << ct << '\n';

  double tot = difftime(at, ct);
  double cur = difftime(bt, at);

  cout << fixed;
  cout.precision(10);

  cout << abs(cur / tot * 100.0) << '\n';

  return 0;
}
