// problem: 장신구 명장 임스
// id: 25496
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

  int p, n;
  cin >> p >> n;
  vi a(n);
  for (auto &i : a)
    cin >> i;

  int ans = 0;
  sort(a.begin(), a.end());
  for (auto &i : a) {
    if (p < 200) {
      p += i;
      ans++;
    }
  }

  cout << ans << "\n";

  return 0;
}
