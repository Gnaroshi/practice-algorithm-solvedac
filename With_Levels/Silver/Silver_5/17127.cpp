// problem: 벚꽃이 정보섬에 피어난 이유
// id: 17127
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

  int n, mx = 0;
  cin >> n;
  vi v(n);

  for (auto &i : v)
    cin >> i;

  int ac = 1;
  for (int a = 0; a < n - 3; a++) {
    ac *= v[a];
    int bc = 1;
    for (int b = a + 1; b < n - 2; b++) {
      bc *= v[b];
      int cc = 1;
      for (int c = b + 1; c < n - 1; c++) {
        cc *= v[c];
        int kt = 1;
        for (int k = c + 1; k < n; k++) {
          kt *= v[k];
        }
        mx = max(mx, ac + bc + cc + kt);
      }
    }
  }

  cout << mx << '\n';

  return 0;
}
