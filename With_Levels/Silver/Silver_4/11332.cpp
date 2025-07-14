// problem: 시간초과
// id: 11332
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

  double MX = 100000000;
  int tc;
  cin >> tc;
  while (tc--) {
    string s;
    int sl;
    double n, t, l, tmx, tn = 1;
    bool chk = true;
    cin >> s >> n >> t >> l;
    tmx = MX / t * l;

    sl = s.length() - 3;
    if (sl == 1) {
      if (n > tmx) {
        chk = false;
      }
    } else if (sl == 2) {
      for (int i = 1; i <= n; i++) {
        tn *= i;
        if (tn > tmx) {
          chk = false;
          break;
        }
      }
    } else {
      if (s[2] == '2') {
        for (int i = 0; i < n; i++) {
          tn *= 2;
          if (tn > tmx) {
            chk = false;
            break;
          }
        }
      } else {
        if (s[4] == '2') {
          if (n * n > tmx) {
            chk = false;
          }
        } else {
          if (n * n * n > tmx) {
            chk = false;
          }
        }
      }
    }
    if (chk) {
      cout << "May Pass.\n";
    } else {
      cout << "TLE!\n";
    }
  }

  return 0;
}
