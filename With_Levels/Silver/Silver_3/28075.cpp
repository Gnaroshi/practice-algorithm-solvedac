// problem: 스파이
// id: 28075
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

int n, m, ans;
const int SZ = 3;
vi a(3), b(3);

void fn(int cur, int cnt, int bef) {
  if (cnt == n) {
    if (cur >= m) {
      ans++;
    }
    return;
  }

  for (int i = 0; i < 6; i++) {
    int t = 0;
    int idx = i % 3;

    if (i < 3) {
      t = a[idx];
    } else {
      t = b[idx];
    }

    if (idx == bef) {
      t /= 2;
    }

    fn(cur + t, cnt + 1, idx);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }

  fn(0, 0, -1);

  cout << ans << '\n';

  return 0;
}
