// problem: 패스트 푸드 상금
// id: 9329
// tag:
// time taken:

#include <algorithm>
#include <cmath>
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
using ll = long long;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, t;
    cin >> n >> m;
    vvi v;
    vi pr;
    vi cnt(m + 1, 0);
    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;
      vi tv(k);
      for (int j = 0; j < k; j++) {
        cin >> tv[j];
      }
      v.push_back(tv);

      cin >> k;
      pr.push_back(k);
    }

    for (int i = 1; i <= m; i++) {
      cin >> t;
      cnt[i] = t;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
      bool chk;
      while (true) {
        chk = true;
        for (auto j : v[i]) {
          if (cnt[j] == 0) {
            chk = false;
            break;
          }
        }
        if (chk) {
          for (auto j : v[i]) {
            cnt[j]--;
          }
          ans += pr[i];
        } else
          break;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
