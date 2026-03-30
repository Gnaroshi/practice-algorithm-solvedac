// problem: 13일의 금요일
// id: 16463
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

  int n, ans = 0;
  vi m = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  ll cur = 13;
  cin >> n;

  for (int i = 2019; i <= n; i++) {
    if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
      m[1] = 29;
    } else {
      m[1] = 28;
    }

    for (int j = 0; j < 12; j++) {
      if (cur % 7 == 4) {
        ans++;
      }
      cur += m[j];
    }
  }

  cout << ans << '\n';

  return 0;
}
