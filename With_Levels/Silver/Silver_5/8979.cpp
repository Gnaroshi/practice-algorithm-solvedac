// problem: 올림픽
// id: 8979
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

  int n, k;
  cin >> n >> k;

  vector<pair<int, pair<int, pair<int, int>>>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].second.second.second >> v[i].first >> v[i].second.first >>
        v[i].second.second.first;
    if (v[i].second.second.second == k) {
      v[i].second.second.second = n + n;
    }
  }

  sort(v.begin(), v.end(), greater<>());

  for (int i = 0; i < n; i++) {
    if (v[i].second.second.second == n + n) {
      cout << i + 1 << '\n';
      return 0;
    }
  }

  return 0;
}
