// problem: 트ㅏㅊ;
// id: 4378
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

  vs kb{"`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;'", "ZXCVBNM,./"};

  int iter;
  bool chk;
  string s;
  while (getline(cin, s)) {
    for (auto i : s) {
      if (i == ' ') {
        cout << ' ';
      } else {
        chk = false;
        for (int j = 0; j < 4; j++) {
          iter = kb[j].length();
          for (int k = 0; k < iter; k++) {
            if (kb[j][k] == i) {
              cout << kb[j][k - 1];
              chk = true;
              break;
            }
          }
          if (chk)
            break;
        }
      }
    }
    cout << '\n';
  }

  return 0;
}
