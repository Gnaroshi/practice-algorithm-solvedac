// problem: 빙고
// id: 2578
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

int fn(vvi t) {
  int cnt = 0, dcnt = 0, rdcnt = 0;
  for (int i = 0; i < 5; i++) {
    int rcnt = 0, ccnt = 0;
    for (int j = 0; j < 5; j++) {
      rcnt += t[i][j];
      ccnt += t[j][i];
    }
    if (rcnt == 5)
      cnt++;
    if (ccnt == 5)
      cnt++;
    dcnt += t[i][i];
    rdcnt += t[4 - i][i];
  }
  if (dcnt == 5)
    cnt++;
  if (rdcnt == 5)
    cnt++;

  // for (int i = 0; i < 5; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     cout << t[i][j] << ' ';
  //   }
  //   cout << '\n';
  // }
  return cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, ans = 0;
  vvi v(5, vi(5, 0));
  vvi chk(5, vi(5, 0));

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> v[i][j];
    }
  }

  bool tchk = false;
  for (int i = 0; i < 25; i++) {
    cin >> t;
    if (tchk) {
      continue;
    }
    for (int a = 0; a < 5; a++) {
      for (int b = 0; b < 5; b++) {
        if (v[a][b] == t) {
          chk[a][b] = 1;
        }
      }
    }
    if (fn(chk) >= 3) {
      tchk = true;
      ans = i + 1;
    }
  }

  cout << ans << '\n';

  return 0;
}
