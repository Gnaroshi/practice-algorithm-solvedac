// problem: 카드
// id: 1835
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <deque>
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

  int n, t;
  cin >> n;
  deque<int> dq(n);
  vi ans(n);
  iota(dq.begin(), dq.end(), 0);
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      t = dq.front();
      dq.pop_front();
      dq.push_back(t);
    }
    t = dq.front();
    dq.pop_front();
    ans[t] = i;
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
