// problem: 타슈
// id: 30018
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

  int n, ans = 0;
  cin >> n;
  vi a(n), b(n);

  for (auto &i : a)
    cin >> i;
  for (auto &i : b)
    cin >> i;

  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      ans += (a[i] - b[i]);
    }
  }

  cout << ans << '\n';

  return 0;
}
