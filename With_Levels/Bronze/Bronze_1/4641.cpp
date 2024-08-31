// problem: Doubles
// id: 4641
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

  while (true) {
    vb v(101, 0);
    int t, ans = 0;
    while (true) {
      cin >> t;
      if (t == -1)
        return 0;
      else if (t == 0)
        break;
      v[t] = 1;
    }

    for (int i = 1; i < 101; i++) {
      if (v[i]) {
        if (i * 2 < 101) {
          if (v[i * 2] == 1)
            ans++;
        }
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
