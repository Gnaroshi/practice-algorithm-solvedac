// problem: 세 개의 소수 문제
// id: 11502
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

  const int SZ = 1001;
  vb isp(SZ, true);
  vi p;

  for (int i = 2; i < SZ; i++) {
    if (isp[i]) {
      p.push_back(i);
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

  int tc, l = p.size();
  cin >> tc;
  while (tc--) {
    int k, t;
    vi ans;
    bool chk = false;
    cin >> k;

    for (int i = 0; i < l; i++) {
      for (int j = i; j < l; j++) {
        t = p[i] + p[j];
        if (t >= k) {
          break;
        }
        for (int w = j; w < l; w++) {
          if (t + p[w] == k) {
            ans.push_back(p[i]);
            ans.push_back(p[j]);
            ans.push_back(p[w]);
            sort(ans.begin(), ans.end());
            chk = true;
            break;
          }
        }
        if (chk) {
          break;
        }
      }
      if (chk) {
        break;
      }
    }

    if (chk) {
      for (int i = 0; i < 3; i++) {
        cout << ans[i] << (i != 2 ? " " : "\n");
      }
    } else {
      cout << "0\n";
    }
  }

  return 0;
}
