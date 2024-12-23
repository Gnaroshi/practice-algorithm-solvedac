// problem: 소수
// id: 1312
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

  int a, b, n, cur = 0;
  cin >> a >> b >> n;
  a %= b;
  n++;
  while (true) {
    if (n == 0) {
      cout << cur << '\n';
      break;
    }
    if (a < b) {
      a *= 10;
      cur = 0;
    } else {
      cur = a / b;
      a %= b;
      a *= 10;
    }
    n--;
  }

  return 0;
}
