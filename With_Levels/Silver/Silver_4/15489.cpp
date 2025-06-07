// problem: 파스칼 삼각형
// id: 15489
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

  int r, c, w;
  cin >> r >> c >> w;
  vvi v(31, vi(31, 1));
  ll ans = 0;
  for (int i = 1; i < 31; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == 1 || j == i)
        v[i][j] = 1;
      else
        v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
    }
  }

  for (int i = 0; i < w; i++) {
    for (int j = 0; j <= i; j++) {
      ans += v[r + i][c + j];
    }
  }

  cout << ans << '\n';

  return 0;
}
