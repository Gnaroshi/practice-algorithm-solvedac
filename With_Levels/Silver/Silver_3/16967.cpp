// problem: 배열 복원하기
// id: 16967
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

  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vvi b(h + x, vi(w + y));
  for (auto &i : b) {
    for (auto &j : i) {
      cin >> j;
    }
  }

  for (int i = x; i < h; i++) {
    for (int j = y; j < w; j++) {
      b[i][j] -= b[i - x][j - y];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << b[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
