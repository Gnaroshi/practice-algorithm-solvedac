// problem: 크리스마스 선물
// id: 14235
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

  int n, a, t;
  priority_queue<int> q;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a == 0) {
      if (!q.empty()) {
        cout << q.top() << '\n';
        q.pop();
      } else {
        cout << -1 << '\n';
      }
    } else {
      for (int j = 0; j < a; j++) {
        cin >> t;
        q.push(t);
      }
    }
  }

  return 0;
}
