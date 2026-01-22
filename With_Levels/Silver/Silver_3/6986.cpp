// problem: 절사평균
// id: 6986
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

  int n, k;
  cin >> n >> k;
  double tot = 0, a, b;
  deque<double> v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < k; i++) {
    v.pop_front();
    v.pop_back();
  }

  for (auto i : v) {
    tot += i;
  }

  a = tot / double(n - 2 * k) + 0.000000001;
  b = (tot + v.front() * k + v.back() * k) / double(n) + 0.000000001;

  cout << fixed;
  cout.precision(2);
  cout << a << '\n';
  cout << b << '\n';

  return 0;
}
