// problem: 양팔저울
// id: 25943
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

  int n, l = 0, r = 0, t;
  cin >> n;
  cin >> t;
  l += t;
  cin >> t;
  r += t;
  for (int i = 2; i < n; i++) {
    cin >> t;
    if (l == r) {
      l += t;
    } else {
      if (l > r) {
        r += t;
      } else {
        l += t;
      }
    }
  }

  int dif = abs(l - r), cnt = 0;
  int w[7] = {100, 50, 20, 10, 5, 2, 1};
  for (int i = 0; i < 7; i++) {
    cnt += (dif / w[i]);
    dif -= (dif / w[i]) * w[i];
  }
  cout << cnt << '\n';

  return 0;
}
