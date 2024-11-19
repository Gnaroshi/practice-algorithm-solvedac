// problem: 셀프 넘버
// id: 4673
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

const int MX = 10001;

int fn(int n) {
  int ret = n;
  while (n > 0) {
    ret += n % 10;
    n /= 10;
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vb chk(MX, true);

  for (int i = 1; i <= MX; i++) {
    int t = fn(i);
    while (t < MX) {
      if (chk[t] == false)
        break;
      chk[t] = false;
      t = fn(t);
    }
  }

  for (int i = 1; i < MX; i++) {
    if (chk[i])
      cout << i << '\n';
  }

  return 0;
}
