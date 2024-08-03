// problem: 繰り返し (Repetition)
// id: 31613
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, n, cnt = 0;
  cin >> x >> n;

  while (x < n) {
    int r = x % 3;
    if (r == 0)
      x++;
    else if (r == 1)
      x *= 2;
    else
      x *= 3;
    cnt++;
  }
  cout << cnt << '\n';

  return 0;
}
