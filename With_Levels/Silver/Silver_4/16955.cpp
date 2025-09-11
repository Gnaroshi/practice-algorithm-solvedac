// problem: 오목  이길 수 있을까?
// id: 16955
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

  string css[5] = {".XXXX", "X.XXX", "XX.XX", "XXX.X", "XXXX."};
  vs v(10);
  for (auto &i : v) {
    cin >> i;
  }

  bool chk = false;
  // .xxxx
  // x.xxx
  // xx.xx
  // xxx.x
  // xxxx.
  for (int i = 0; i < 10; i++) {
    for (int cs = 0; cs < 5; cs++) {
      if (v[i].find(css[cs]) != string::npos) {
        chk = true;
        break;
      }
    }
    if (chk) {
      break;
    }
  }

  if (!chk) {
    for (int i = 0; i < 10; i++) {
      string t = "";
      for (int j = 0; j < 10; j++) {
        t += v[j][i];
      }
      for (int cs = 0; cs < 5; cs++) {
        if (t.find(css[cs]) != string::npos) {
          chk = true;
          break;
        }
      }
      if (chk) {
        break;
      }
    }
  }

  if (!chk) {
    for (int i = 0; i <= 5; i++) {
      for (int j = 0; j <= 5; j++) {
        string t = "";
        for (int k = 0; k < 5; k++) {
          t += v[i + k][j + k];
        }
        for (int cs = 0; cs < 5; cs++) {
          if (t.find(css[cs]) != string::npos) {
            chk = true;
            break;
          }
        }
        if (chk)
          break;
      }
      if (chk)
        break;
    }
  }

  if (!chk) {
    for (int i = 0; i <= 5; i++) {
      for (int j = 4; j <= 9; j++) {
        string t = "";
        for (int k = 0; k < 5; k++) {
          t += v[i + k][j - k];
        }
        for (int cs = 0; cs < 5; cs++) {
          if (t.find(css[cs]) != string::npos) {
            chk = true;
            break;
          }
        }
        if (chk)
          break;
      }
      if (chk)
        break;
    }
  }

  cout << chk << '\n';

  return 0;
}
