// problem:
// id: MultiMax
// tag: 14753
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

  int n;
  cin >> n;
  vi v(n), ans;
  for (auto &i : v) {
    cin >> i;
  }
  sort(v.begin(), v.end(), greater<>());

  ans.push_back(v[0] * v[1]);
  ans.push_back(v[0] * v[1] * v[2]);
  ans.push_back(v[0] * v[1] * v[n - 1]);
  ans.push_back(v[0] * v[n - 1] * v[n - 2]);
  ans.push_back(v[n - 1] * v[n - 2]);
  ans.push_back(v[n - 1] * v[n - 2] * v[n - 3]);

  sort(ans.begin(), ans.end(), greater<>());
  cout << ans[0] << '\n';

  return 0;
}
