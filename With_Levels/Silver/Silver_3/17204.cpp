// problem: 죽음의 게임
// id: 17204
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

  int n, k, cnt = 1, cur = 0, nxt;
  cin >> n >> k;
  vi v(n);
  vb loop_chk(n, false);

  for (auto &i : v) {
    cin >> i;
  }

  bool chk = false;
  loop_chk[0] = true;
  while (true) {
    nxt = v[cur];
    if (nxt == k) {
      chk = true;
      break;
    }
    if (loop_chk[nxt]) {
      break;
    } else {
      loop_chk[nxt] = true;
    }

    cnt++;
    cur = nxt;
  }

  if (chk) {
    cout << cnt << '\n';
  } else {
    cout << "-1\n";
  }

  return 0;
}
