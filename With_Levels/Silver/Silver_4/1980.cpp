// problem: 햄버거 사랑
// id: 1980
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

  int n, m, t, cnt = 0, ch = 0, cc = 0x3f3f3f3f;
  cin >> n >> m >> t;

  if (n > m) {
    swap(n, m);
  }

  while (t >= m * cnt) {
    int tt = t - m * cnt;
    int tch = cnt;
    int tcc = 0;

    tch += tt / n;
    tcc += tt % n;

    if (cc > tcc) {
      ch = tch;
      cc = tcc;
    } else if (tcc == cc && ch < tch) {
      ch = tch;
      cc = tcc;
    }
    cnt++;
  }

  cout << ch << ' ' << cc << '\n';

  return 0;
}
