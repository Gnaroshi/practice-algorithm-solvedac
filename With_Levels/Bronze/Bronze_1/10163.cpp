// problem: 색종이
// id: 10163
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

  int n;
  cin >> n;
  vvi v(1001, vi(1001, -1));
  int x, y, w, h;
  for (int i = 0; i < n; i++) {
    cin >> x >> y >> w >> h;
    for (int j = x; j < x + w; j++) {
      for (int k = y; k < y + h; k++) {
        v[j][k] = i;
      }
    }
  }

  vi cnt(1001, 0);
  for (int i = 0; i < 1001; i++) {
    for (int j = 0; j < 1001; j++) {
      if (v[i][j] != -1) {
        cnt[v[i][j]]++;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << cnt[i] << '\n';
  }

  return 0;
}
