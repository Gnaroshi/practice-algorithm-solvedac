// problem: 스도쿠 채점
// id: 9291
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

  const int SZ = 9;
  const int GSZ = 3;
  int tc, cur;
  cin >> tc;
  for (int tcc = 1; tcc <= tc; tcc++) {
    bool chk = true;
    vvi v(SZ, vi(SZ, 0));
    for (int i = 0; i < SZ; i++) {
      for (int j = 0; j < SZ; j++) {
        cin >> v[i][j];
      }
    }

    cout << "Case " << tcc << ": ";

    for (int i = 0; i < SZ; i++) {
      vb tchk(SZ, false);
      for (int j = 0; j < SZ; j++) {
        cur = v[i][j] - 1;
        if (tchk[cur] == true) {
          chk = false;
          break;
        } else {
          tchk[cur] = true;
        }
      }
      if (!chk) {
        break;
      }
    }

    if (!chk) {
      cout << "INCORRECT\n";
      continue;
    }

    for (int j = 0; j < SZ; j++) {
      vb tchk(SZ, false);
      for (int i = 0; i < SZ; i++) {
        cur = v[i][j] - 1;
        if (tchk[cur] == true) {
          chk = false;
          break;
        } else {
          tchk[cur] = true;
        }
      }
      if (!chk) {
        break;
      }
    }

    if (!chk) {
      cout << "INCORRECT\n";
      continue;
    }

    for (int a = 0; a < GSZ; a++) {
      for (int b = 0; b < GSZ; b++) {
        vb tchk(SZ, false);
        for (int i = 0; i < GSZ; i++) {
          for (int j = 0; j < GSZ; j++) {
            cur = v[i + a * 3][j + b * 3] - 1;
            if (tchk[cur] == true) {
              chk = false;
              break;
            } else {
              tchk[cur] = true;
            }
          }
          if (!chk) {
            break;
          }
        }
        if (!chk) {
          break;
        }
      }
      if (!chk) {
        break;
      }
    }

    if (!chk) {
      cout << "IN";
    }
    cout << "CORRECT\n";
  }

  return 0;
}
