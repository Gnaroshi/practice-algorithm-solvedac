// problem: Number Steps
// id: 7326
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

  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, cur = 0;
    cin >> a >> b;

    if (a == b) {
      if (a != 0) {
        for (int i = 0; i <= a; i++) {
          if (i % 2 == 0 && i != 0)
            cur += 3;
          else if (i % 2 == 1)
            cur += 1;
        }
      }
    } else if (a == b + 2 && a >= 2) {
      cur += 2;
      for (int i = 2; i <= a; i++) {
        if (i % 2 == 0 && i != 2)
          cur += 3;
        else if (i % 2 == 1)
          cur += 1;
      }

    } else {
      cout << "No Number\n";
      continue;
    }

    cout << cur << '\n';
  }

  return 0;
}
