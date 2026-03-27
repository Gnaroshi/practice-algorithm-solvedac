// problem: Counting Haybales
// id: 14170
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

int n, q, l, r;
vi v;

int fn1(int t) {
  int tl = 0, tr = n + 1, tm;
  while (tl < tr) {
    tm = (tl + tr) / 2 + 1;
    if (v[tm] < t) {
      tl = tm;
    } else {
      tr = tm - 1;
    }
  }

  return tl;
}

int fn2(int t) {
  int tl = 0, tr = n + 1, tm;
  while (tl < tr) {
    tm = (tl + tr) / 2;
    if (v[tm] > t) {
      tr = tm;
    } else {
      tl = tm + 1;
    }
  }

  return tl;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> q;
  v.resize(n + 2, -1);

  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  v[n + 1] = 0x3f3f3f3f;

  sort(v.begin(), v.end());
  while (q--) {
    cin >> l >> r;
    cout << fn2(r) - fn1(l) - 1 << '\n';
  }

  return 0;
}
