// problem: 설탕 배달 2
// id: 26099
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

  ll n, q, r, a = 0, b = 0;
  cin >> n;
  q = n / 5;
  r = n % 5;
  if (r == 0) {
    cout << q << '\n';
  } else {
    if (r == 3) {
      cout << q + 1 << "\n";
    } else {
      if (q == 0) {
        cout << -1 << "\n";
      } else {
        // 1 2 4
        // 6 7 9
        q--;
        r += 5;
        if (r == 6 || r == 9) {
          cout << q + r / 3 << '\n';
        } else {
          if (q == 0) {
            cout << -1 << '\n';
          } else {
            cout << q + 3 << "\n";
          }
        }
      }
    }
  }

  return 0;
}
