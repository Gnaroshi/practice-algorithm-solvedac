// problem: 한윤정이 이탈리아에 가서 아이스크림을 사먹는데
// id: 2422
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
using vvb = vector<vb>;
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

  int n, m, a, b, ans = 0;
  cin >> n >> m;

  vvb chk(n + 1, vb(n + 1, false));
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    chk[a][b] = true;
    chk[b][a] = true;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (chk[i][j]) {
        continue;
      }
      for (int k = j + 1; k <= n; k++) {
        if (chk[i][k] || chk[j][k]) {
          continue;
        }
        ans++;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
