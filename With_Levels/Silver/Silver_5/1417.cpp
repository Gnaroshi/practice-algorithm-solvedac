// problem: 국회의원 선거
// id: 1417
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

  int n, d, ans = 0;
  cin >> n >> d;
  vi v(n - 1);
  for (auto &i : v)
    cin >> i;

  if (n == 1) {
    cout << 0 << "\n";
    return 0;
  }

  while (true) {
    sort(v.begin(), v.end(), greater<>());
    if (d > v.front())
      break;
    d++, ans++;
    v.front()--;
  }

  cout << ans << "\n";

  return 0;
}