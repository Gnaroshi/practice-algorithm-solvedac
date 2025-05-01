// problem: 덱 2
// id: 28279
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

  deque<int> dq;
  int n, a, b, t;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a == 1 || a == 2) {
      cin >> b;
      if (a == 1) {
        dq.push_front(b);
      } else if (a == 2) {
        dq.push_back(b);
      }
    } else if (a == 3) {
      if (!dq.empty()) {
        t = dq.front();
        dq.pop_front();
        cout << t;
      } else {
        cout << -1;
      }
    } else if (a == 4) {
      if (!dq.empty()) {
        t = dq.back();
        dq.pop_back();
        cout << t;
      } else {
        cout << -1;
      }

    } else if (a == 5) {
      cout << dq.size();

    } else if (a == 6) {
      cout << dq.empty();

    } else if (a == 7) {
      if (!dq.empty()) {
        t = dq.front();
        cout << t;
      } else {
        cout << -1;
      }
    } else if (a == 8) {
      if (!dq.empty()) {
        t = dq.back();
        cout << t;
      } else {
        cout << -1;
      }
    }
    if (a != 1 && a != 2) {
      cout << '\n';
    }
  }

  return 0;
}
