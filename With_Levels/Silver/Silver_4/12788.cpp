// problem: 제 2회 IUPC는 잘 개최될 수 있을까?
// id: 12788
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

  int n, m, k, ans = 0, tot, cur = 0;
  cin >> n >> m >> k;
  tot = m * k;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end(), greater<>());

  for (int i = 0; i < n; i++) {
    cur += v[i];
    if (cur >= tot) {
      ans = i + 1;
      break;
    }
  }

  if (ans == 0) {
    cout << "STRESS\n";
  } else {
    cout << ans << "\n";
  }

  return 0;
}
