// problem: 큰 수 구성하기
// id: 18511
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

  int n, k, t;
  cin >> n >> k;
  vb v(11, 0);
  for (int i = 0; i < k; i++) {
    cin >> t;
    v[t] = true;
  }

  for (int i = n;; i--) {
    t = i;
    bool chk = true;
    while (t > 0) {
      if (!v[t % 10]) {
        chk = false;
        break;
      }
      t /= 10;
    }
    if (chk) {
      cout << i << '\n';
      return 0;
    }
  }

  return 0;
}
