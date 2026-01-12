// problem: 마라톤 1
// id: 10655
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

using pii = pair<int, int>;
using vpi = vector<pii>;

inline int fn(pii a, pii b) {
  return abs(a.first - b.first) + abs(a.second - b.second);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = 0, cur = 0;
  cin >> n;
  vpi v(n);
  cin >> v[0].first >> v[0].second;
  for (int i = 1; i < n; i++) {
    cin >> v[i].first >> v[i].second;
    cur += fn(v[i], v[i - 1]);
  }

  for (int i = 1; i < n - 1; i++) {
    ans = max(ans,
              fn(v[i - 1], v[i]) + fn(v[i], v[i + 1]) - fn(v[i - 1], v[i + 1]));
  }

  cout << cur - ans << '\n';

  return 0;
}
