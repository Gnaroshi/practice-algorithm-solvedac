// problem: 누울 자리를 찾아라
// id: 1652
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

  int n, a = 0, b = 0;
  cin >> n;
  vs v(n);
  for (auto &i : v)
    cin >> i;

  for (int i = 0; i < n; i++) {
    int t = 0;
    for (int j = 0; j < n; j++) {
      if (v[i][j] == '.')
        t++;
      if (v[i][j] == 'X' || j == n - 1) {
        if (t >= 2) {
          a++;
        }
        t = 0;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    int t = 0;
    for (int j = 0; j < n; j++) {
      if (v[j][i] == '.')
        t++;
      if (v[j][i] == 'X' || j == n - 1) {
        if (t >= 2) {
          b++;
        }
        t = 0;
      }
    }
  }

  cout << a << ' ' << b << "\n";

  return 0;
}
