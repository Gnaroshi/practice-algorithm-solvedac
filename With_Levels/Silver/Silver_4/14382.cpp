// problem: 숫자세는 양 (Large)
// id: 14382
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
  for (int tcc = 0; tcc < tc; tcc++) {
    int n;
    cin >> n;
    cout << "Case #" << tcc + 1 << ": ";
    if (n == 0) {
      cout << "INSOMNIA";
    } else {
      vb chk(10, false);
      bool tchk = false;
      int t = n;
      for (int i = 0;; i++) {
        tchk = false;
        string s = to_string(t);

        int iter = s.length();
        for (int j = 0; j < iter; j++) {
          chk[s[j] - '0'] = true;
        }

        for (int j = 0; j < 10; j++) {
          if (chk[j] == false) {
            tchk = true;
            break;
          }
        }

        if (!tchk) {
          cout << t;
          break;
        }
        t += n;
      }
    }

    cout << '\n';
  }

  return 0;
}
