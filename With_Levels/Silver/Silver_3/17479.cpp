// problem: 정식당
// id: 17479
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

  ll a, b, c, t, n, pa, pb, pc;
  string s;
  cin >> a >> b >> c;
  map<string, ll> ma, mb, mc;
  for (int i = 0; i < a; i++) {
    cin >> s >> t;
    ma[s] = t;
  }
  for (int i = 0; i < b; i++) {
    cin >> s >> t;
    mb[s] = t;
  }
  t = 0;
  for (int i = 0; i < c; i++) {
    cin >> s;
    mc[s] = t;
  }

  cin >> n;
  pa = pb = pc = 0;
  bool chk = true;
  while (n--) {
    cin >> s;
    if (ma.find(s) != ma.end()) {
      pa += ma[s];
    }
    if (mb.find(s) != mb.end()) {
      pb += mb[s];
    }
    if (mc.find(s) != mc.end()) {
      if (pc == 0) {
        pc += 1;
      } else {
        chk = false;
      }
    }
  }

  if (pa < 20000 && pb != 0) {
    chk = false;
  }
  if (pa + pb < 50000 && pc != 0) {
    chk = false;
  }

  cout << (chk ? "Okay" : "No") << '\n';

  return 0;
}
