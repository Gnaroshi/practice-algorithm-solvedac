// problem: 유니크
// id: 5533
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

  int n;
  cin >> n;
  vvi v(n, vi(3, 0));
  vi a(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> v[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    vi chk(101, 0);
    for (int j = 0; j < n; j++) {
      chk[v[j][i]]++;
    }
    for (int j = 0; j < n; j++) {
      if (chk[v[j][i]] == 1) {
        a[j] += v[j][i];
      }
    }
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << '\n';

  return 0;
}
