// problem: 가위 바위 보
// id: 8896
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, sl, ans = 0;
    string s, t;
    char c;
    cin >> n;
    vs v(n);
    for (auto &i : v) {
      cin >> i;
    }
    sl = v[0].size();
    t.resize(sl);
    fill(t.begin(), t.end(), '.');
    for (int i = 0; i < sl; i++) {
      int cur = 0;
      vb chk(3, false);
      for (int j = 0; j < n; j++) {
        c = v[j][i];
        if (c == 'S') {
          chk[0] = true;
        } else if (c == 'R') {
          chk[1] = true;
        } else if (c == 'P') {
          chk[2] = true;
        }
      }

      for (int j = 0; j < 3; j++) {
        if (chk[j]) {
          cur++;
        }
      }

      if (cur == 2) {
        if (!chk[0]) {
          for (int j = 0; j < n; j++) {
            if (v[j][i] == 'R') {
              v[j] = t;
            }
          }
        } else if (!chk[1]) {
          for (int j = 0; j < n; j++) {
            if (v[j][i] == 'P') {
              v[j] = t;
            }
          }
        } else if (!chk[2]) {
          for (int j = 0; j < n; j++) {
            if (v[j][i] == 'S') {
              v[j] = t;
            }
          }
        }
      }
    }

    int is = 0;
    for (int i = 0; i < n; i++) {
      if (v[i][0] != '.') {
        is++;
        ans = i + 1;
      }
    }

    cout << (is == 1 ? ans : 0) << '\n';
  }

  return 0;
}
