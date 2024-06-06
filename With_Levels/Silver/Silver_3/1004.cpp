// problem: 어린 왕자
// id: 1004
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int x1, y1, x2, y2, cx, cy, r, n, ans = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> n;
    for (int i = 0; i < n; i++) {
      cin >> cx >> cy >> r;
      int d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
      int d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
      int rr = r * r;

      if (rr > d1 && rr > d2)
        ;
      else if (rr > d1)
        ans++;
      else if (rr > d2)
        ans++;
    }

    cout << ans << '\n';
  }

  return 0;
}
