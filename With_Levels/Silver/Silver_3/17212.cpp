// problem: 달나라 토끼를 위한 구매대금 지불 도우미
// id: 17212
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

  int n;
  cin >> n;
  vi v(100001, 0);
  vi coin = {1, 2, 5, 7};
  for (int i = 0; i <= n; i++) {
    for (int c = 0; c < 4; c++) {
      if (v[i + coin[c]]) {
        v[i + coin[c]] = min(v[i + coin[c]], v[i] + 1);
      } else {
        v[i + coin[c]] = v[i] + 1;
      }
    }
  }

  cout << v[n] << '\n';

  return 0;
}
