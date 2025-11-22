// problem: 돌 게임 3
// id: 9657
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

  int n;
  cin >> n;

  // 1 1 s
  // 2 c
  // 3 3 s
  // 4 4 s
  // 5 3 s
  // 6 1 4 s
  // 7 c
  // 8 1 s
  // 9 c

  vb chk(1001, false);
  chk[0] = true;
  chk[1] = true;
  chk[3] = true;
  chk[4] = true;
  chk[5] = true;
  for (int i = 6; i <= n; i++) {
    if (chk[i - 1] && chk[i - 3] && chk[i - 4]) {
      chk[i] = false;
    } else {
      chk[i] = true;
    }
  }

  cout << (chk[n] ? "SK" : "CY") << '\n';

  return 0;
}
