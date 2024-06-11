// problem: 운동회
// id: 25425
// tag:
// time taken:

#include <algorithm>
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
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, m, a, k;
  cin >> n >> m >> a >> k;

  ll mx, mn;
  if (a - k >= n - 1) {
    mx = n;
    mn = (a - k) / m + 1 + ((a - k) % m ? 1 : 0);
  } else {
    mx = a - k + 1;
    if (a - k != 0)
      mn = (a - k) / m + 1 + ((a - k) % m ? 1 : 0);
    else
      mn = 1;
  }

  cout << mx << ' ' << mn << '\n';

  return 0;
}
