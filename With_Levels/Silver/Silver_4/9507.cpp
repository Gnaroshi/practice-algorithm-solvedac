// problem: Generations of Tribbles
// id: 9507
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    ll t;
    cin >> n;
    vll v(4);
    v[0] = 1;
    v[1] = 1;
    v[2] = 2;
    v[3] = 4;
    for (int i = 4; i <= n; i++) {
      t = v[0] + v[1] + v[2] + v[3];
      for (int j = 0; j < 3; j++) {
        v[j] = v[j + 1];
      }
      v[3] = t;
    }
    if (n < 4) {
      cout << v[n] << '\n';
    } else {
      cout << v[3] << '\n';
    }
  }

  return 0;
}
