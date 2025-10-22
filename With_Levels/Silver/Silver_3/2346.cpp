// problem: 풍선 터뜨리기
// id: 2346
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

  deque<int> dq;
  vi ans;
  vi nxt;
  int n, t, cur = 0, cn;
  cin >> n;
  cn = n;
  for (int i = 0; i < n; i++) {
    dq.push_back(i);
    cin >> t;
    nxt.push_back(t);
  }

  for (int i = 0; i < n; i++) {
    t = nxt[dq[cur]];
    ans.push_back(dq[cur] + 1);
    dq.erase(dq.begin() + cur);
    cn--;

    if (t > 0) {
      t--;
    }
    cur += t;
    if (cn != 0) {
      cur %= cn;
    }
    if (cur < 0) {
      cur += cn;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
