// problem: 어두운 굴다리
// id: 17266
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

int n, m, l, r, c, ans;
vi v;

bool chk(int h) {
  if (h - v[0] < 0) {
    return false;
  }

  if (n - v.back() > h) {
    return false;
  }

  for (int i = 1; i < m; i++) {
    if (v[i] - v[i - 1] > 2 * h) {
      return false;
    }
  }

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  v.resize(m);
  for (auto &i : v) {
    cin >> i;
  }

  l = 1, r = n, ans = n;
  while (l <= r) {
    c = (l + r) / 2;
    if (chk(c)) {
      ans = c;
      r = c - 1;
    } else {
      l = c + 1;
    }
  }

  cout << ans << '\n';

  return 0;
}
