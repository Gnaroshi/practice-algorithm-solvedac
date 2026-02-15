// problem: 눈덩이 굴리기
// id: 21735
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

int n, m, ans = 0;
vi v;

void fn(int idx, int tm, int cur) {
  if (idx >= n || tm == m) {
    ans = max(ans, cur);
    return;
  }

  ans = max(ans, cur);
  if (idx + 1 <= n) {
    fn(idx + 1, tm + 1, cur + v[idx + 1]);
  }
  if (idx + 2 <= n) {
    fn(idx + 2, tm + 1, cur / 2 + v[idx + 2]);
  }

  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  v.resize(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  fn(0, 0, 1);

  cout << ans << '\n';

  return 0;
}
