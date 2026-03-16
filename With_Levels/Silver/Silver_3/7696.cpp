// problem: 반복하지 않는 수
// id: 7696
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

vi v;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  v.push_back(0);

  const int SZ = 1000000;
  int m, t;
  bool chk;
  for (int i = 1; v.size() <= 1000000; i++) {
    m = 0, t = i, chk = false;
    while (t > 0) {
      if (m & (1 << (t % 10))) {
        chk = true;
        break;
      }
      m |= (1 << (t % 10));
      t /= 10;
    }
    if (!chk) {
      v.push_back(i);
    }
  }

  int n;
  while (true) {
    cin >> n;
    if (n == 0) {
      break;
    }

    cout << v[n] << '\n';
  }

  return 0;
}
