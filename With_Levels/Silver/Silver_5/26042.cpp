// problem: 식당 입구 대기 줄
// id: 26042
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

  int n, t, a;
  cin >> n;

  queue<int> q;
  vpi v(n);

  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t == 1) {
      cin >> a;
      q.push(a);
      v[i].second = a;
    } else {
      q.pop();
    }
    v[i].first -= q.size();
  }

  sort(v.begin(), v.end());
  auto ans = v.front();
  cout << -1 * ans.first << ' ' << ans.second << '\n';

  return 0;
}
