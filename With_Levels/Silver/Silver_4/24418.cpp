// problem: 알고리즘 수업 -  행렬 경로 문제 1
// id: 24418
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

int n, ca, cb;
const int SZ = 16;
vvi v(SZ, vi(SZ));

ll mpa_c(int i, int j) {
  if (i == 0 || j == 0) {
    ca++;
    return 0;
  }
  return (v[i][j] + (max(mpa_c(i - 1, j), mpa_c(i, j - 1))));
}

ll mpa(int n) { return mpa_c(n, n); }

ll mpb(int n) {
  vvll d(SZ, vll(SZ));
  for (int i = 0; i <= n; i++) {
    d[i][0] = d[0][i] = 0;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cb++;
      d[i][j] = v[i][j] + max(d[i - 1][j], d[i][j - 1]);
    }
  }

  return d[n][n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> v[i][j];
    }
  }

  mpa(n);
  mpb(n);

  cout << ca << ' ' << cb << '\n';

  return 0;
}
