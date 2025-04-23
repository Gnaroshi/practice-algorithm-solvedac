// problem: 가로수
// id: 2485
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

  int n, bef, cur, g, ans = 0;
  cin >> n >> bef;
  vi dist(n, 0);
  dist[0] = bef;
  for (int i = 1; i < n; i++) {
    cin >> cur;
    dist[i] = cur - bef;
    bef = cur;
  }
  g = dist[1];
  for (int i = 2; i < n; i++) {
    g = gcd(g, dist[i]);
  }

  for (int i = 1; i < n; i++) {
    ans += (dist[i] / g) - 1;
  }

  cout << ans << '\n';

  return 0;
}
