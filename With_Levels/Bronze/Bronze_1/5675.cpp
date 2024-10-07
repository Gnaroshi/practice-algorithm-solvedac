// problem: 시침과 분침
// id: 5675
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

  bool chk[181] = {false};
  for (int i = 0; i < 12; i++) {
    int h = i * 30;
    int m = 0;
    chk[h] = true;
    // for (int j = 0; j < 30; j++) {
    //   h += 1;
    //   m += 12;
    //   int t = max(h, m) - min(h, m);
    //   chk[t] = true;
    // }
    for (int j = 0; j < 60; j++) {
      if (j % 12 == 0)
        h += 6;
      m += 6;
      int df = abs(h - m);
      int t = min(df, 360 - df);
      chk[t] = true;
    }
  }
  int a;
  while (cin >> a) {
    cout << (chk[a] ? "Y\n" : "N\n");
  }

  return 0;
}
