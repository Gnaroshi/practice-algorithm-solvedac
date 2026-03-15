// problem: 스피카
// id: 21316
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

  const int SZ = 12;
  vvi v(SZ, vi(SZ, 0));
  vi d(SZ, 0);
  int a, b;

  for (int i = 0; i < SZ; i++) {
    cin >> a >> b;
    a--, b--;
    v[a][b] = 1;
    v[b][a] = 1;
    d[a]++;
    d[b]++;
  }

  for (int i = 0; i < SZ; i++) {
    vb chk(3, false);
    if (d[i] == 3) {
      for (int j = 0; j < SZ; j++) {
        if (v[i][j] != 0 && d[j] == 1) {
          chk[0] = true;
        }
        if (v[i][j] != 0 && d[j] == 2) {
          chk[1] = true;
        }
        if (v[i][j] != 0 && d[j] == 3) {
          chk[2] = true;
        }
      }
    }
    if (chk[0] && chk[1] && chk[2]) {
      cout << i + 1 << '\n';
      break;
    }
  }

  return 0;
}
