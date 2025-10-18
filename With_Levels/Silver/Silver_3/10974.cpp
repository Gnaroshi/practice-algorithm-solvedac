// problem: 모든 순열
// id: 10974
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

int n;
vb chk;
vi cur;
void fn(int cnt) {
  if (cnt == n) {
    for (int i = 0; i < n; i++) {
      cout << cur[i] << (i != n - 1 ? ' ' : '\n');
    }
    return;
  }
  for (int i = 1; i <= n; i++) {
    if (!chk[i]) {
      cur.push_back(i);
      chk[i] = true;
      fn(cnt + 1);
      cur.pop_back();
      chk[i] = false;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  chk.assign(n + 1, false);
  fn(0);

  return 0;
}
