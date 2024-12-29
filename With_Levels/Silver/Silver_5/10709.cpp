// problem: 기상캐스터
// id: 10709
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

  int n, m;
  cin >> n >> m;
  vs p(n);
  for (auto &i : p)
    cin >> i;

  vvi chk(n, vi(m, 0));
  int t = 0;
  for (int i = 0; i < n; i++) {
    t = -1;
    for (int j = 0; j < m; j++) {
      if (p[i][j] == 'c') {
        t = 0;
      } else if (t != -1) {
        t++;
      }
      chk[i][j] = t;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << chk[i][j] << (j != m - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
