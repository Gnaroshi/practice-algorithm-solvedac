// problem: D-Day
// id: 1308
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

int mth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void mfn(int y) {
  if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
    mth[1] = 29;
  } else {
    mth[1] = 28;
  }
  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int ay, am, ad, by, bm, bd, ans = 0;
  cin >> ay >> am >> ad >> by >> bm >> bd;

  if (ay + 1000 <= by) {
    bool chk = false;
    if (ay + 1000 < by) {
      chk = true;
    } else {
      if (am < bm) {
        chk = true;
      } else if (am == bm) {
        if (ad <= bd) {
          chk = true;
        }
      }
    }

    if (chk) {
      cout << "gg\n";
      return 0;
    }
  }

  mfn(ay);
  while (true) {
    if (ad == bd && am == bm && ay == by) {
      break;
    }
    ans++;
    ad++;
    if (ad > mth[am - 1]) {
      ad = 1;
      am++;
      if (am == 13) {
        ay++;
        am = 1;
        mfn(ay);
      }
    }
  }

  cout << "D-" << ans << '\n';

  return 0;
}
