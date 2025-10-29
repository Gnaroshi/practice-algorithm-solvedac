// problem: 숫자 야구
// id: 2503
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

const int SZ = 3;

pair<int, int> cmp(string a, string b) {
  int rstrk = 0, rbl = 0;
  vb chka(10, false), chkb(10, false);
  for (int i = 0; i < SZ; i++) {
    if (a[i] == b[i]) {
      rstrk++;
    }
    chka[a[i] - '0'] = true;
    chkb[b[i] - '0'] = true;
  }

  for (int i = 1; i < 10; i++) {
    if (chka[i] && chka[i] == chkb[i]) {
      rbl++;
    }
  }

  rbl = max(0, rbl - rstrk);

  return {rstrk, rbl};
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, cnt = 0, tstrk, tbl, idx = 0, cstrk, cbl;
  bool chk;
  cin >> n;
  string trq, cur;
  vs rq;
  vi strk, bl;
  for (int i = 0; i < n; i++) {
    cin >> trq >> tstrk >> tbl;
    rq.push_back(trq);
    strk.push_back(tstrk);
    bl.push_back(tbl);
  }

  for (int a = 1; a <= 9; a++) {
    for (int b = 1; b <= 9; b++) {
      if (a == b) {
        continue;
      }
      for (int c = 1; c <= 9; c++) {
        if (a == c || b == c) {
          continue;
        }
        chk = true;
        cur = to_string(a) + to_string(b) + to_string(c);
        for (int i = 0; i < n; i++) {
          trq = rq[i], tstrk = strk[i], tbl = bl[i];
          tie(cstrk, cbl) = cmp(cur, trq);
          if (cstrk != tstrk || cbl != tbl) {
            chk = false;
            break;
          }
        }

        if (chk) {
          cnt++;
        }
      }
    }
  }

  cout << cnt << "\n";

  return 0;
}
