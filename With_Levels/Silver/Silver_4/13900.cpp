// problem: 순서쌍의 곱의 합
// id: 13900
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

  ll n, t, ans = 0, sm = 0;
  cin >> n;
  vll v(n);
  for (auto &i : v) {
    cin >> i;
    sm += i;
  }

  for (int i = 0; i < n; i++) {
    ans += (sm - v[i]) * v[i];
  }

  cout << ans / 2 << '\n';

  return 0;
}
