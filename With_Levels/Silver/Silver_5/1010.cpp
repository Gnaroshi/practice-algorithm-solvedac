// problem: 다리 놓기
// id: 1010
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
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

using ll = long long;
ll n, m, t, ans;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    cin >> n >> m;
    t = ans = 1;
    for (int i = m; i > m - n; i--, t++) {
      ans *= i;
      ans /= t;
    }
    cout << ans << '\n';
  }

  return 0;
}
