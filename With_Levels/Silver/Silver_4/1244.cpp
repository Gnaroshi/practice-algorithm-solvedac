// problem: 스위치 켜고 끄기
// id: 1244
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

  int n, st, s, t;
  cin >> n;
  bool chk;
  vb sw(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> chk;
    sw[i] = chk;
  }
  cin >> st;
  for (int i = 0; i < st; i++) {
    cin >> s >> t;
    if (s == 1) {
      for (int j = t; j <= n; j += t) {
        sw[j] = !sw[j];
      }
    } else {
      if (t == 1 || t == n) {
        sw[t] = !sw[t];
      } else {
        sw[t] = !sw[t];
        for (int d = 1;; d++) {
          if (t - d == 0 || d + t == n + 1) {
            break;
          }
          if (sw[t - d] != sw[d + t])
            break;
          sw[t - d] = !sw[t - d];
          sw[d + t] = !sw[d + t];
        }
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    // cout << sw[i] << (i != n ? ' ' : '\n');
    cout << sw[i] << ' ';
    if (i % 20 == 0) {
      cout << '\n';
    }
  }

  return 0;
}
