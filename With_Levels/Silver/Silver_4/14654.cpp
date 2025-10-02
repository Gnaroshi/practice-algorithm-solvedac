// problem: 스테판 쿼리
// id: 14654
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

  int n, cam = 0, cbm = 0, tcam = 0, tcbm = 0, ta, tb;

  cin >> n;
  vi a(n), b(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }

  bool updtd = true;
  for (int i = 0; i < n; i++) {
    ta = a[i], tb = b[i];
    bool chk = true;
    if ((ta == tb && updtd) || (ta % 3 + 1 == tb)) {
      updtd = false;
      cam = max(cam, tcam);
      tcam = 0;
      tcbm++;
    } else {
      updtd = true;
      cbm = max(cbm, tcbm);
      tcbm = 0;
      tcam++;
    }
  }

  cam = max(cam, tcam);
  cbm = max(cbm, tcbm);

  cout << max(cam, cbm) << '\n';

  return 0;
}
