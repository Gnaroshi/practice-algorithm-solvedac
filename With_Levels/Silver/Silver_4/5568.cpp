// problem: 카드 놓기
// id: 5568
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

int n, k, ans = 0;
string t;
vs v;
map<string, bool> mp;

void fn(vb chk, string cur, int loc, int cnt) {
  if (cnt == k) {
    if (mp.find(cur) == mp.end()) {
      mp[cur] = true;
      ans++;
    }
    return;
  }

  for (int i = 0; i < n; i++) {
    if (chk[i]) {
      chk[i] = false;
      fn(chk, cur + v[i], loc + 1, cnt + 1);
      chk[i] = true;
    }
  }
  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;
  v.resize(n);
  for (auto &i : v) {
    cin >> i;
  }

  vb chk(n, true);
  fn(chk, "", 0, 0);

  cout << ans << '\n';

  return 0;
}
