// problem: 정렬된 연속한 부분수열의 개수
// id: 31395
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

  ll n, cnt = 0, ans = 0;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  int bef = 0, cur;
  for (int i = 0; i < n; i++) {
    cur = v[i];
    if (cur > bef) {
      cnt++;
    } else {
      ans += ((cnt + 1) * cnt / 2);
      cnt = 1;
    }
    bef = cur;
  }

  ans += ((cnt + 1) * cnt / 2);
  cout << ans << '\n';

  return 0;
}
