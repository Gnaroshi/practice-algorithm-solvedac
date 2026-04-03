// problem: 직교다각형 복원
// id: 2103
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

  int n, x, y, ans = 0;
  cin >> n;
  const int SZ = 10001;
  vvi a(SZ), b(SZ);

  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    a[x].push_back(y);
    b[y].push_back(x);
  }

  for (int i = 0; i < SZ; i++) {
    sort(a[i].begin(), a[i].end());
    sort(b[i].begin(), b[i].end());

    int iter = a[i].size();
    for (int j = 0; j < iter; j += 2) {
      ans += a[i][j + 1] - a[i][j];
    }
    iter = b[i].size();
    for (int j = 0; j < iter; j += 2) {
      ans += b[i][j + 1] - b[i][j];
    }
  }

  cout << ans << '\n';

  return 0;
}
