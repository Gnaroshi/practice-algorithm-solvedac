// problem: 세로 달력
// id: 26148
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

  int n, dow;
  cin >> n >> dow;

  int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int iter = 365, m = 0, d = 1;
  if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
    iter++;
    md[1] = 29;
  }
  n = dow;
  n--;
  vvi v(61, vi(7, 0));

  for (int i = 1; i <= iter; i++) {
    v[n / 7][n % 7] = m + 1;
    d++;
    n++;
    if (d > md[m]) {
      if (m == 11)
        break;
      d = 1;
      m++;
    }
  }

  int ans = 0;

  for (int i = 0; i < 55; i++) {
    for (int j = 0; j < 7; j++) {
      if (v[i][j] == 0 || v[i + 4][j] == 0)
        continue;
      if (v[i][j] == v[i + 4][j])
        ans++;
    }
  }

  // for (int i = 0; i < 53; i++) {
  //   for (int j = 0; j < 7; j++)
  //     cout << v[i][j] << (v[i][j] > 9 ? " " : "  ");
  //   cout << '\n';
  // }

  cout << ans << '\n';

  return 0;
}
