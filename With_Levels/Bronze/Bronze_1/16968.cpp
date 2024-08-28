// problem: 차량 번호판1
// id: 16968
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int ans = 1, cc = 0, cd = 0, iter;
  string s;
  cin >> s;
  iter = s.length();
  if (s[0] == 'c')
    cc = 1, ans *= 26;
  else if (s[0] == 'd')
    cd = 1, ans *= 10;
  for (int i = 1; i < iter; i++) {
    if (s[i] == 'c') {
      if (cc == 1) {
        ans *= 25;
      } else {
        cc = 1;
        ans *= 26;
      }
      cd = 0;
    } else if (s[i] == 'd') {
      if (cd == 1) {
        ans *= 9;
      } else {
        cd = 1;
        ans *= 10;
      }
      cc = 0;
    }
  }
  cout << ans << '\n';

  return 0;
}
