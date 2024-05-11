// problem: 기타줄
// id: 1049
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using pii = pair<int, int>;

bool cmp(pii a, pii b) { return a.second < b.second; }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, ans = 0, p, q, t;
  cin >> n >> m;

  vector<pii> v;
  for (int i = 0; i < m; i++) {
    cin >> p >> q;
    v.push_back({p, q});
  }

  sort(v.begin(), v.end());

  p = n / 6, q = n % 6;
  ans += v[0].first * p;
  t = v[0].first;

  sort(v.begin(), v.end(), cmp);
  // for (auto i : v)
  //   cout << i.first << ' ' << i.second << '\n';

  ans = min(ans, v[0].second * (p * 6));
  ans += min(t, v[0].second * q);

  cout << ans << '\n';

  return 0;
}
