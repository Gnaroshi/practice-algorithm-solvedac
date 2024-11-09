// problem: 멋쟁이 포닉스
// id: 25551
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

  ll mw, mb, tw, tb, pw, pb;
  cin >> mw >> mb >> tw >> tb >> pw >> pb;

  ll a = min(mw, min(tb, pw));
  ll b = min(mb, min(tw, pb));
  ll ans = min(a, b) * 2 + min(max(a, b) - min(a, b), ll(1));
  cout << ans << '\n';

  return 0;
}
