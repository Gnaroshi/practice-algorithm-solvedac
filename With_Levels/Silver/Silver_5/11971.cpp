// problem: 속도위반
// id: 11971
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

  int n, m, mx = 0, l, s, cur = 0;
  vi a(101, 0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> l >> s;
    for (int j = cur; j < cur + l; j++) {
      a[j] = s;
    }
    cur += l;
  }

  cur = 0;
  for (int i = 0; i < m; i++) {
    cin >> l >> s;
    for (int j = cur; j < cur + l; j++) {
      mx = max(mx, s - a[j]);
    }
    cur += l;
  }

  cout << mx << '\n';

  return 0;
}
