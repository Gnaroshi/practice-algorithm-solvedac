// problem: 눈 치우기
// id: 26215
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

  int n, t, ans = 0, a, b;
  cin >> n;
  priority_queue<int> pq;
  for (int i = 0; i < n; i++) {
    cin >> t;
    pq.push(t);
  }

  while (true) {
    if (pq.empty()) {
      break;
    }
    if (pq.size() == 1) {
      ans += pq.top();
      break;
    }
    if (ans > 1440) {
      break;
    }
    a = pq.top();
    pq.pop();
    b = pq.top();
    pq.pop();
    ans++;
    a--;
    b--;
    if (a) {
      pq.push(a);
    }
    if (b) {
      pq.push(b);
    }
  }

  cout << (ans > 1440 ? -1 : ans) << '\n';

  return 0;
}
