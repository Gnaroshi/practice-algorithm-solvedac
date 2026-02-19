// problem: 한동이는 공부가 하기 싫어!
// id: 3182
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

  int n, mx = 0, mxl = 0, tmx, cur, nxt, cnt;
  cin >> n;
  vi v(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }

  for (int i = 1; i <= n; i++) {
    vb chk(n + 1, false);
    cur = i;
    cnt = 0;

    while (!chk[cur]) {
      chk[cur] = true;
      cnt++;
      cur = v[cur];
    }

    if (cnt > mx) {
      mx = cnt;
      mxl = i;
    }
  }

  cout << mxl << '\n';

  return 0;
}
