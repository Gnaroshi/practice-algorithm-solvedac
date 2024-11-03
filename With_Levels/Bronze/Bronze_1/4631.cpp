// problem: Symmetric Order
// id: 4631
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

  int n;
  for (int tcc = 1;; tcc++) {
    cin >> n;
    if (n == 0)
      break;
    cout << "SET " << tcc << '\n';
    vector<string> v(n);
    for (auto &i : v)
      cin >> i;

    for (int i = 0; i < n; i += 2) {
      cout << v[i] << '\n';
    }

    int st = n - 1;
    if (n % 2 == 1)
      st--;

    for (int i = st; i > 0; i -= 2) {
      cout << v[i] << '\n';
    }
  }

  return 0;
}
