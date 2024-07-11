// problem: 핑크빈 레이드
// id: 31712
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

  ll c[3], d[3], h, ans = 0;
  for (int i = 0; i < 3; i++) {
    cin >> c[i] >> d[i];
  }
  cin >> h;

  h -= (d[0] + d[1] + d[2]);
  while (h > 0) {
    ans++;
    for (int i = 0; i < 3; i++) {
      if (ans % c[i] == 0)
        h -= d[i];
    }
  }
  cout << ans << '\n';

  return 0;
}
