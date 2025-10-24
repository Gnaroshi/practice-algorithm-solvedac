// problem: 도키도키 간식드리미
// id: 12789
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

  int n, t, cur = 1;
  cin >> n;
  stack<int> a, b;
  bool ans = true;
  for (int i = 0; i < n; i++) {
    cin >> t;
    b.push(t);
  }

  for (int i = 0; i < n; i++) {
    t = b.top();
    b.pop();
    a.push(t);
  }

  while (true) {
    if (!a.empty() && a.top() == cur) {
      a.pop();
      if (cur == n) {
        break;
      }
      cur++;
      continue;
    } else if (!b.empty() && b.top() == cur) {
      b.pop();
      if (cur == n) {
        break;
      }
      cur++;
      continue;
    } else if (!a.empty()) {
      t = a.top();
      a.pop();
      b.push(t);
    } else {
      ans = false;
      break;
    }
  }

  cout << (ans ? "Nice" : "Sad") << '\n';

  return 0;
}
