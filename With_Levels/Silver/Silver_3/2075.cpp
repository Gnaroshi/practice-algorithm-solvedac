// problem: N번째 큰 수
// id: 2075
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

  int n, t;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t;
      if (pq.size() < n) {
        pq.push(t);
      } else if (t > pq.top()) {
        pq.pop();
        pq.push(t);
      }
    }
  }

  cout << pq.top() << '\n';

  return 0;
}
