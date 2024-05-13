// problem: 게임
// id: 1072
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long x, y, z, l, r, m, ans;
  cin >> x >> y;
  z = (y * 100) / x;

  if (z >= 99) {
    cout << -1;
    return 0;
  }

  l = 0, r = x;
  while (l <= r) {
    m = (l + r) / 2;
    if (100 * (y + m) / (x + m) > z) {
      ans = m;
      r = m - 1;
    } else
      l = m + 1;
  }
  cout << ans;

  return 0;
}
