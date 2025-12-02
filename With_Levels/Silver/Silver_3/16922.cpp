// problem: 로마 숫자 만들기
// id: 16922
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

int n, ans;
int rn[4] = {1, 5, 10, 50};
vb chk(1001, false);

void fn(int idx, int cur, int cnt) {
  if (cnt == n) {
    if (!chk[cur]) {
      chk[cur] = true;
      ans++;
    }
    return;
  }
  for (int i = idx; i < 4; i++) {
    fn(i, cur + rn[i], cnt + 1);
  }
  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  fn(0, 0, 0);

  cout << ans << '\n';

  return 0;
}
