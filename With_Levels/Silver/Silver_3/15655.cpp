// problem: N과 M (6)
// id: 15665
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

int n, m;
vi v, cur;
vb chk;

void fn(int cnt, int bef) {
  if (cnt == m) {
    for (int i = 0; i < m; i++) {
      cout << cur[i] << (i != m - 1 ? ' ' : '\n');
    }
    return;
  }

  for (int i = bef; i < n; i++) {
    if (!chk[i]) {
      chk[i] = true;
      cur.push_back(v[i]);
      fn(cnt + 1, i);
      chk[i] = false;
      cur.pop_back();
    }
  }

  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  v.resize(n);
  chk.assign(n, false);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());

  fn(0, 0);

  return 0;
}
