// problem: 하늘에서 정의가 빗발친다!
// id: 13411
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

  int n;
  cin >> n;
  vector<pair<double, int>> ans;
  for (int i = 1; i <= n; i++) {
    double x, y, v, r;
    cin >> x >> y >> v;
    r = sqrt(x * x + y * y) / v;
    ans.push_back({r, i});
  }

  sort(ans.begin(), ans.end());
  for (auto i : ans) {
    cout << i.second << '\n';
  }

  return 0;
}
