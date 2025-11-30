// problem: 삼각형 만들기
// id: 1448
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

  int n, ans = -1;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end(), greater<>());

  for (int i = 2; i < n; i++) {
    int cur = v[i - 2];
    if (cur < v[i - 1] + v[i]) {
      ans = cur + v[i - 1] + v[i];
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}
