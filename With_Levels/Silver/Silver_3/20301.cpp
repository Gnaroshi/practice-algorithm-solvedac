// problem: 반전 요세푸스
// id: 20301
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

  int n, m, k;
  cin >> n >> k >> m;

  deque<int> dq(n);
  iota(dq.begin(), dq.end(), 1);
  int cur = 0;
  bool dir = true;

  while (!dq.empty()) {
    if (cur > 0 && cur % m == 0) {
      dir = !dir;
    }

    if (dir) {
      for (int i = 0; i < k - 1; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
      }
    } else {
      for (int i = 0; i < k; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
    cout << dq.front() << '\n';
    dq.pop_front();

    cur++;
  }

  return 0;
}
