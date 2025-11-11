// problem: 블로그
// id: 21921
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

  int n, x, t, mx = 0, cnt, cur = 0, nxt;
  cin >> n >> x;

  cin >> t;
  cur += t;
  queue<int> q;
  q.push(t);
  for (int i = 1; i < x; i++) {
    cin >> t;
    cur += t;
    q.push(t);
  }

  mx = cur;
  cnt = 1;
  int iter = n - x;
  for (int i = 0; i < iter; i++) {
    cin >> t;
    cur += t;
    q.push(t);
    t = q.front();
    q.pop();
    cur -= t;
    if (cur > mx) {
      mx = cur;
      cnt = 1;
    } else if (cur == mx) {
      cnt++;
    }
  }

  if (mx == 0) {
    cout << "SAD\n";
  } else {
    cout << mx << '\n';
    cout << cnt << '\n';
  }

  return 0;
}
