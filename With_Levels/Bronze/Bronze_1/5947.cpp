// problem: Book Club
// id: 5947
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

  int n, nq, p, a, b, ans = 0;
  cin >> n >> nq >> p;

  vvi v(n, vi(nq, 0));
  vb chk(n, true);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < nq; j++) {
      cin >> v[i][j];
    }
  }

  for (int i = 0; i < p; i++) {
    cin >> a >> b;
    for (int j = 0; j < n; j++) {
      if (chk[j]) {
        if (v[j][a - 1] != b) {
          chk[j] = false;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (chk[i])
      ans++;
  }

  cout << ans << '\n';

  return 0;
}
