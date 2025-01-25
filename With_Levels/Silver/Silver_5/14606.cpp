// problem: 피자 (Small)
// id: 14606
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

  int n;
  cin >> n;
  vi v(11, 0);
  v[2] = 1;
  v[3] = 3;
  for (int i = 4; i <= 10; i++) {
    int h = i / 2;
    if (i % 2) {
      v[i] = h * (h + 1) + v[h] + v[h + 1];
    } else {
      v[i] = h * h + v[h] * 2;
    }
  }

  cout << v[n] << '\n';

  return 0;
}
