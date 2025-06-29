// problem: 수 고르기
// id: 20186
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

  int n, k, ans = 0;
  cin >> n >> k;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end(), greater<>());

  for (int i = 0; i < k; i++) {
    ans += v[i];
  }

  cout << ans - (k * (k - 1) / 2) << '\n';

  return 0;
}
