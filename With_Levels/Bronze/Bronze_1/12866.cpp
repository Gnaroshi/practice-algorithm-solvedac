// problem: 피노키오
// id: 12866
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

  const ll MOD = 1000000007;
  int n;
  string s;
  cin >> n >> s;

  int cnt[4] = {0};
  ll ans = 1;

  for (auto i : s) {
    if (i == 'A')
      cnt[0]++;
    else if (i == 'C')
      cnt[1]++;
    else if (i == 'G')
      cnt[2]++;
    else if (i == 'T')
      cnt[3]++;
  }

  for (int i = 0; i < 4; i++) {
    ans *= cnt[i];
    ans %= MOD;
  }

  cout << ans << '\n';

  return 0;
}
