// problem: 특별상이라도 받고 싶어
// id: 24460
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

int n;
vvi v;

int fn(int x, int y, int sz) {
  if (sz == 1) {
    return v[x][y];
  }

  if (sz == 2) {
    vi t;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        t.push_back(v[x + i][y + j]);
      }
    }
    sort(t.begin(), t.end());
    return t[1];
  }

  int h = sz / 2;
  vi t;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      t.push_back(fn(x + i * h, y + j * h, h));
    }
  }

  sort(t.begin(), t.end());
  return t[1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  v.resize(n, vi(n));
  for (auto &i : v) {
    i.resize(n);
    for (auto &j : i) {
      cin >> j;
    }
  }

  cout << fn(0, 0, n) << '\n';

  return 0;
}
