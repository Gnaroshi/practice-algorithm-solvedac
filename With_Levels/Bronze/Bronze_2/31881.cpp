// problem: K512에 바이러스 퍼뜨리기
// id: 31881
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

  int n, q, t, x, cnt;
  cin >> n >> q;
  cnt = n;
  vector<bool> v(n + 1, false);
  while (q--) {
    cin >> t;
    if (t != 3)
      cin >> x;
    if (t == 1) {
      if (!v[x]) {
        v[x] = true;
        cnt--;
      }

    } else if (t == 2) {
      if (v[x]) {
        v[x] = false;
        cnt++;
      }
    } else {
      cout << cnt << '\n';
    }
  }

  return 0;
}
