// problem: 거스름돈
// id: 14916
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

  int n, ans = 0;
  cin >> n;
  if (n == 1 || n == 3) {
    cout << -1 << '\n';
    return 0;
  }

  int a = n / 5, b;

  if (n == 5) {
    a = 1, b = 0;
  } else {
    if ((n - a * 5) % 2 == 1) {
      a--;
    }

    b = (n - a * 5) / 2;
  }
  cout << a + b << '\n';

  return 0;
}
