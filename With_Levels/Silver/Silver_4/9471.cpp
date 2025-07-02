// problem: 피사노 주기
// id: 9471
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
  for (int tcc = 1; tcc <= tc; tcc++) {
    int n;
    ll m;
    cin >> n >> m;
    cout << n << ' ';

    ll bef = 0, cur = 1, t, iter = m * m;
    for (ll i = 0; i < iter; i++) {
      t = (bef + cur) % m;
      if (cur == 0 && t == 1) {
        cout << i + 1 << '\n';
        break;
      }
      bef = cur;
      cur = t;
    }
  }

  return 0;
}
