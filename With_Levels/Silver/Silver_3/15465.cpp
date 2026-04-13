// problem: Milk Measurement
// id: 15465
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

struct Upd {
  int d;
  string s;
  int ch;
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, d, m, mx = 7, tmx = 7, ans = 0;
  cin >> n;

  vector<Upd> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i].d >> v[i].s >> v[i].ch;
  }
  sort(v.begin(), v.end(),
       [](const Upd &a, const Upd &b) { return a.d < b.d; });
  map<string, int> mp;
  mp["Bessie"] = mp["Elsie"] = mp["Mildred"] = 7;

  vb chk(3, true);

  for (int i = 0; i < n; i++) {
    mp[v[i].s] += v[i].ch;
    tmx = max({mp["Bessie"], mp["Elsie"], mp["Mildred"]});

    vb nxt = {mp["Bessie"] == tmx, mp["Elsie"] == tmx, mp["Mildred"] == tmx};

    if (nxt != chk) {
      ans++;
      chk = nxt;
    }
  }

  cout << ans << "\n";

  return 0;
}
