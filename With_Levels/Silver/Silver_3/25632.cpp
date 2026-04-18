// problem: 소수 부르기 게임
// id: 25632
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

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  const int SZ = 1001;
  vb isp(SZ, true);
  vb chk(SZ, true);
  vi p;
  deque<int> yt, yj;
  bool tchk = true;
  for (int i = 2; i < SZ; i++) {
    if (isp[i]) {
      p.push_back(i);
      if (a <= i && i <= b && c <= i && i <= d) {
        if (tchk) {
          yt.push_back(i);
        } else {
          yj.push_back(i);
        }
        tchk = !tchk;
      } else {
        if (a <= i && i <= b) {
          yt.push_back(i);
        }
        if (c <= i && i <= d) {
          yj.push_back(i);
        }
      }
    }
    for (auto j : p) {
      if (i * j >= SZ) {
        break;
      }
      isp[i * j] = false;
      if (i % j == 0) {
        break;
      }
    }
  }

  bool cur = true;
  while (!yt.empty() && !yj.empty()) {
    if (cur) {
      while (!yt.empty()) {
        if (chk[yt.front()]) {
          chk[yt.front()] = false;
          cur = !cur;
          break;
        } else {
          yt.pop_front();
        }
      }
    } else {
      while (!yj.empty()) {
        if (chk[yj.front()]) {
          chk[yj.front()] = false;
          cur = !cur;
          break;
        } else {
          yj.pop_front();
        }
      }
    }
  }

  cout << (!yt.empty() ? "yt" : "yj") << '\n';

  return 0;
}
