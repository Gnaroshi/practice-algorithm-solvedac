// problem: 반복수열
// id: 2331
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

int fn(int n, int p) {
  int ts = 0;
  while (n > 0) {
    ts += pow(n % 10, p);
    n /= 10;
  }
  return ts;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, p, ans = 0;
  cin >> n >> p;
  deque<int> dq;
  deque<int>::iterator it;

  dq.push_back(n);
  while (true) {
    n = fn(n, p);
    it = find(dq.begin(), dq.end(), n);
    if (it != dq.end()) {
      ans = it - dq.begin();
      break;
    }
    dq.push_back(n);
  }

  cout << ans << '\n';

  return 0;
}
