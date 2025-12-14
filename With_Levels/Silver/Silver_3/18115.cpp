// problem: 카드 놓기
// id: 18115
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

  int n, t, d;
  cin >> n;

  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  deque<int> dq;
  for (int i = n - 1; i >= 0; i--) {
    t = v[i];
    if (t == 1) {
      dq.push_back(n - i);
    } else if (t == 2) {
      if (dq.empty()) {
        dq.push_back(n - i);
      } else {
        d = dq.back();
        dq.pop_back();
        dq.push_back(n - i);
        dq.push_back(d);
      }
    } else if (t == 3) {
      dq.push_front(n - i);
    }
  }

  reverse(dq.begin(), dq.end());
  for (auto i : dq) {
    cout << i << ' ';
  }
  cout << '\n';

  return 0;
}
