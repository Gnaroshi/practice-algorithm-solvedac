// problem: 준석이의 수학 숙제
// id: 17206
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

  int tc, t = 0;
  cin >> tc;
  vi cnt(80001, 0);
  for (int i = 0; i < 80001; i++) {
    if (i % 3 == 0 || i % 7 == 0) {
      t += i;
    }
    cnt[i] = t;
  }
  while (tc--) {
    ll n, ans = 0;
    cin >> n;
    cout << cnt[n] << '\n';
  }

  return 0;
}
