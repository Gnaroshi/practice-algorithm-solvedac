// problem: 할아버지는 유명해!
// id: 5766
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

  int n, m, t;
  while (true) {
    cin >> n >> m;
    if (n + m == 0) {
      break;
    }

    vpi cnt(10001);
    for (int i = 1; i <= 10000; i++) {
      cnt[i] = {0, i};
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> t;
        cnt[t].first++;
      }
    }

    sort(cnt.begin(), cnt.end(), greater<>());
    vi ans;
    int mx = cnt.front().first, nxt;
    bool chk = false;
    for (int i = 1; i < 10001; i++) {
      if (!chk && cnt[i].first < mx) {
        chk = true;
        nxt = cnt[i].first;
        ans.push_back(cnt[i].second);
        continue;
      }
      if (chk && cnt[i].first < nxt) {
        break;
      } else {
        ans.push_back(cnt[i].second);
      }
    }
    sort(ans.begin(), ans.end());
    int iter = ans.size();
    for (int i = 0; i < iter; i++) {
      cout << ans[i] << (i != iter - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
