// problem: 악마의 연차 계산기
// id: 23628
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cy, cm, cd, sy, sm, sd, ey, em, ed;
  cin >> sy >> sm >> sd >> ey >> em >> ed;

  cy = sy;
  cm = sm;
  cd = sd;

  int mdo = 0, ydo = 0, wd = 0, yc = 0;
  while (true) {
    cd++;
    wd++;
    if (cd == 31) {
      cd = 1;
      cm++;
      if (cm == 13) {
        cm = 1;
        cy++;
        yc++;
      }
    }

    if (cd == sd) {
      mdo++;
      if (cm == sm) {
        ydo += (yc - 1) / 2 + 15;
      }
    }

    if (cy == ey && cm == em && cd == ed)
      break;
  }

  cout << ydo << ' ' << min(mdo, 36) << '\n' << wd << "days\n";

  return 0;
}
