// problem: 샷건
// id: 32371
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

  vs v(4);
  for (auto &i : v)
    cin >> i;
  string s;
  cin >> s;

  vector<vb> chk(4, vb(10, false));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 10; j++) {
      for (auto k : s) {
        if (v[i][j] == k) {
          chk[i][j] = true;
          break;
        }
      }
    }
  }

  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 9; j++) {
      if (chk[i][j] == true) {
        if (chk[i - 1][j] == true && chk[i][j - 1] == true &&
            chk[i + 1][j] == true && chk[i][j + 1] == true) {
          cout << v[i][j] << '\n';
          return 0;
        }
      }
    }
  }

  return 0;
}
