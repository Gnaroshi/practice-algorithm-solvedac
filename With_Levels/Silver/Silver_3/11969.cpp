// problem: Breed Counting
// id: 11969
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

  int n, q, t, l, r;
  cin >> n >> q;
  vvi v(3, vi(n + 2, 0));
  for (int i = 1; i <= n; i++) {
    cin >> t;
    for (int j = 0; j < 3; j++) {
      v[j][i] = v[j][i - 1];
    }
    v[--t][i]++;
  }
  for (int i = 0; i < 3; i++) {
    v[i][n + 1] = v[i][n];
  }

  for (int i = 0; i < q; i++) {
    cin >> l >> r;
    for (int j = 0; j < 3; j++) {
      cout << v[j][r] - v[j][l - 1] << (j != 2 ? ' ' : '\n');
    }
  }

  return 0;
}
