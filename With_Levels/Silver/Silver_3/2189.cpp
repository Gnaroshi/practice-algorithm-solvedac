// problem: Magickology
// id: 2189
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

  int n, tc = 1, tgt;
  bool chk;
  while (cin >> n && n != 0) {
    vvi v(n, vi(n));
    vi an;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> v[i][j];
        an.push_back(v[i][j]);
      }
    }

    tgt = 0;
    for (int i = 0; i < n; i++) {
      tgt += v[0][i];
    }

    chk = true;
    for (int i = 0; i < n; i++) {
      int rs = 0, cs = 0;
      for (int j = 0; j < n; j++) {
        rs += v[i][j];
        cs += v[j][i];
      }
      if (rs != tgt || cs != tgt) {
        chk = false;
        break;
      }
    }
    string ans = "Not a ";
    if (chk) {
      ans = "Semi-";
      int d1 = 0, d2 = 0;
      for (int i = 0; i < n; i++) {
        d1 += v[i][i];
        d2 += v[i][n - 1 - i];
      }
      if (d1 == tgt && d2 == tgt) {
        ans = "Weakly-";
        sort(an.begin(), an.end());
        bool tchk = true;
        int iter = an.size() - 1;
        for (int i = 0; i < iter; i++) {
          if (an[i] == an[i + 1]) {
            tchk = false;
            break;
          }
        }

        if (tchk) {
          ans = "Strongly-";
          bool tchk = true;
          int iter = an.size() - 1;
          for (int i = 0; i < iter; i++) {
            if (an[i + 1] != an[i] + 1) {
              tchk = false;
              break;
            }
          }
          if (tchk) {
            ans = "Magically-";
          }
        }
      }
    }

    cout << "Square " << tc++ << ": " << ans << "Magick Square\n";
  }

  return 0;
}
