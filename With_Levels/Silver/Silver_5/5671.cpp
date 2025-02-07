// problem: 호텔 방 번호
// id: 5671
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

  const int MX = 5001;
  vb v(MX, false);

  for (int i = 1; i <= MX; i++) {
    bool chk = true;
    vb tv(10, false);
    int cur = i, tcur;
    while (cur > 0) {
      tcur = cur % 10;
      if (tv[tcur]) {
        {
          chk = false;
          break;
        }
      }
      tv[tcur] = true;
      cur /= 10;
    }
    v[i] = chk;
  }

  // for (int i = 1; i <= 200; i++) {
  //   cout << i << ' ' << v[i] << '\n';
  // }

  string s;
  while (getline(cin, s)) {
    int n, m, ans = 0;
    stringstream st;
    st.str(s);
    st >> n >> m;

    for (int i = n; i <= m; i++) {
      ans += (v[i] ? 1 : 0);
    }

    cout << ans << '\n';
  }

  return 0;
}
