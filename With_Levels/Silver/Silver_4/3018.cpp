// problem: 캠프파이어
// id: 3018
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

  int n, k, t, tc, mcnt = 0;
  cin >> n;
  cin >> tc;
  map<int, map<int, bool>> mp;
  // for (int i = 1; i <= n; i++) {
  //   mp[i] = 0;
  // }
  for (int tcc = 1; tcc <= tc; tcc++) {
    cin >> k;
    vi te(k);
    bool sy = false;
    for (auto &i : te) {
      cin >> i;
      if (i == 1) {
        sy = true;
        mcnt++;
        mp[1][mcnt] = true;
      }
    }
    if (sy) {
      for (auto i : te) {
        mp[i][mcnt] = true;
      }
    } else {
      // int mx = 0;
      // for (auto i : te) {
      //   mx = max(mx, mp[i]);
      // }
      // for (auto i : te) {
      //   mp[i] = mx;
      // }
      map<int, bool> tmp;
      for (auto i : te) {
        for (auto j : mp[i]) {
          tmp[j.first] = true;
        }
      }
      for (auto i : te) {
        mp[i] = tmp;
      }
    }
  }

  // for (auto i : mp) {
  //   cout << "mcnt: " << mcnt << " | " << i.first << ' ' << i.second << "\n";
  // }

  for (auto i : mp) {
    cout << i.first << ": ";
    for (auto j : i.second) {
      cout << j.first << ' ';
    }
    cout << '\n';
  }

  for (int i = 1; i <= n; i++) {
    if (mp[i].size() == mcnt) {
      cout << i << '\n';
    }
  }

  return 0;
}
