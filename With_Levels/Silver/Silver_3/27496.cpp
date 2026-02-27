// problem: 발머의 피크 이론
// id: 27496
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

  const int MN = 129, MX = 138;
  int n, l, cur = 0, t, bef, ans = 0;
  cin >> n >> l;
  queue<int> q;
  for (int i = 0; i < l; i++) {
    cin >> t;
    cur += t;
    q.push(t);
    if (MN <= cur && cur <= MX) {
      ans++;
    }
  }
  for (int i = l; i < n; i++) {
    cin >> t;
    cur += t;
    bef = q.front();
    q.pop();
    cur -= bef;
    q.push(t);

    if (MN <= cur && cur <= MX) {
      ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}
