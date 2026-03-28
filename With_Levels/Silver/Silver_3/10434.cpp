// problem: 행복한 소수
// id: 10434
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

  const int SZ = 10001;
  vi p;
  vb isp(SZ, true);
  isp[0] = isp[1] = false;
  for (int i = 2; i < SZ; i++) {
    if (isp[i]) {
      p.push_back(i);
    }
    for (auto j : p) {
      if (i * j > SZ) {
        break;
      }
      isp[i * j] = false;
      if (i % j == 0) {
        break;
      }
    }
  }

  int tc;
  cin >> tc;
  while (tc--) {
    int tidx, m, tm, t;
    bool chk = true;
    cin >> tidx >> m;
    tm = m;

    if (isp[m]) {
      map<int, bool> mp;
      while (true) {
        t = 0;
        while (m) {
          t += (m % 10) * (m % 10);
          m /= 10;
        }
        m = t;
        if (m == 1) {
          break;
        }
        if (mp.find(m) != mp.end()) {
          chk = false;
          break;
        }
        mp[m] = true;
      }

    } else {
      chk = false;
    }

    cout << tidx << ' ' << tm << ' ' << (chk ? "YES" : "NO") << '\n';
  }

  return 0;
}
