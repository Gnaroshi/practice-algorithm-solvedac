// problem: 지뢰
// id: 2232
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

int n, t;
vi v, ans;
vpi loc;
vb chk;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  chk.resize(n);
  fill(chk.begin(), chk.end(), true);

  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
    loc.push_back({t, i});
  }

  sort(loc.begin(), loc.end(), greater<>());

  for (int i = 0; i < n; i++) {
    int cur = loc[i].second, p = loc[i].first;
    int nxt, nxtp, tcur, tp;
    if (!chk[cur])
      continue;
    ans.push_back(cur + 1);
    chk[cur] = false;

    tcur = cur, tp = p;
    nxt = cur - 1;
    nxtp = v[nxt];
    while (true) {
      if (nxt == -1)
        break;
      if (!chk[nxt])
        break;
      if (nxtp < tp) {
        chk[nxt] = false;
      } else
        break;
      if (nxt == 0)
        break;
      nxt--;
      tp = nxtp;
      nxtp = v[nxt];
    }

    tcur = cur, tp = p;
    nxt = cur + 1;
    nxtp = v[nxt];
    while (true) {
      if (nxt == n)
        break;
      if (!chk[nxt])
        break;
      if (nxtp < tp) {
        chk[nxt] = false;
      } else
        break;
      if (nxt == n - 1)
        break;
      nxt++;
      tp = nxtp;
      nxtp = v[nxt];
    }
  }
  sort(ans.begin(), ans.end());
  for (auto i : ans)
    cout << i << '\n';

  return 0;
}
