// problem: 물 주기
// id: 23351
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

  int n, k, a, b, ans = 0;
  cin >> n >> k >> a >> b;
  vi v(n, k);

  sort(v.begin(), v.end());
  while (find(v.begin(), v.end(), 0) == v.end()) {
    for (int i = 0; i < a; i++) {
      v[i] += b;
    }
    for (auto &i : v) {
      i--;
    }

    sort(v.begin(), v.end());
    ans++;
  }

  cout << ans << '\n';

  return 0;
}
