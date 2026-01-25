// problem: 슬라임 합치기
// id: 14241
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

  int n, vl;
  cin >> n;
  ll ans = 0;
  vll v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());

  while (v.size() > 1) {
    vl = v.size();
    ans += v[vl - 2] * v[vl - 1];
    v[vl - 2] += v[vl - 1];
    v.pop_back();
  }

  cout << ans << '\n';

  return 0;
}
