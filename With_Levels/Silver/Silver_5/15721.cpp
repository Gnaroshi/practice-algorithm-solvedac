// problem: 번데기
// id: 15721
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

  int a, t, tg;
  cin >> a >> t >> tg;
  string s = "0101", b = "00", d = "11", tot = "";
  int sl = 0, ad = 2;
  tot += s + b + d;
  sl = 8;
  while (true) {
    if (sl >= t * 2 + 1) {
      break;
    }
    b += '0';
    d += '1';
    ad++;
    tot += s + b + d;
    sl += 2 * ad + 4;
  }

  int cur = 0;
  if (tg == 0) {
    for (int i = 0; i < sl; i++) {
      if (tot[i] == '0') {
        cur++;
      }
      if (cur == t) {
        cout << (i % a) << '\n';
        break;
      }
    }
  } else {
    for (int i = 0; i < sl; i++) {
      if (tot[i] == '1') {
        cur++;
      }
      if (cur == t) {
        cout << (i % a) << '\n';
        break;
      }
    }
  }

  return 0;
}
