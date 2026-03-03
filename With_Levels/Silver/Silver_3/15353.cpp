// problem: 큰 수 A+B(2)
// id: 15353
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iomanip>
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

const int DV = 1000000000;

vll fn(string s) {
  vll ret;
  int iter = s.size();
  for (int i = iter; i > 0; i -= 9) {
    if (i < 9) {
      ret.push_back(stoll(s.substr(0, i)));
    } else {
      ret.push_back(stoll(s.substr(i - 9, 9)));
    }
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string sa, sb;
  cin >> sa >> sb;
  vll a = fn(sa), b = fn(sb), ans;

  ll cry = 0;
  int as = a.size(), bs = b.size(), iter = max(as, bs);

  for (int i = 0; i < iter || cry; i++) {
    ll ts = cry + (i < as ? a[i] : 0) + (i < bs ? b[i] : 0);
    ans.push_back(ts % DV);
    cry = ts / DV;
  }

  cout << ans.back();
  iter = ans.size() - 2;
  for (int i = iter; i >= 0; i--) {
    cout << setfill('0') << setw(9) << ans[i];
  }

  cout << '\n';

  return 0;
}
