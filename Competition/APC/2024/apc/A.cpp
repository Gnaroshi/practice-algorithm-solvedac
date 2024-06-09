// problem: A번 - 마라탕후루
// id:
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

int n, p, q, ta, tb, thr, x;
vi a, b, ans;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> p >> q;
  for (int i = 0; i < n; i++) {
    cin >> ta;
    a.push_back(ta);
  }

  for (int i = 0; i < n; i++) {
    cin >> tb;
    b.push_back(tb);
  }

  bool chk = true;
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i]) {
      ans.push_back(0);
      continue;
    }
    if (p == q || (a[i] > b[i] && p >= q) || (a[i] < b[i] && p <= q)) {
      chk = false;
      break;
    }
    ta = abs(a[i] - b[i]);
    tb = abs(p - q);
    if (tb > ta) {
      chk = false;
      break;
    }
    // if (ta > tb) {
    //   if (ta % tb != 0) {
    //     chk = false;
    //     break;
    //   } else
    //     x = ta / tb;
    //
    // } else if (ta < tb) {
    //   if (tb % ta != 0) {
    //     chk = false;
    //     break;
    //   } else
    //     x = tb / ta;
    // } else
    //   x = 1;
    x = lcm(ta, tb) / tb;

    thr += x;
    if (x > 10000) {
      chk = false;
      break;
    }

    ans.push_back(x);
  }

  if (chk) {
    cout << "YES\n";
    for (auto i : ans)
      cout << i << " ";
  } else
    cout << "NO\n";

  return 0;
}
