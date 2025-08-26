// problem: 페이지 세기
// id: 4821
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

  int n;
  while (true) {
    cin >> n;
    if (!n) {
      break;
    }
    int ans = 0;
    string s, t;
    cin >> s;
    for (auto &i : s) {
      if (i == ',') {
        i = ' ';
      }
    }
    stringstream st;
    st.str(s);
    vb chk(1001, false);
    while (st >> t) {
      int lh = -1, tl = t.length();
      for (int i = 0; i < tl; i++) {
        if (t[i] == '-') {
          lh = i;
          break;
        }
      }
      if (lh == -1) {
        chk[stoi(t)] = true;
      } else {
        int l = stoi(t.substr(0, lh + 1));
        int h = stoi(t.substr(lh + 1, tl - lh - 1));
        for (int i = l; i <= h; i++) {
          chk[i] = true;
        }
      }
    }
    for (int i = 1; i <= n; i++) {
      if (chk[i]) {
        ans++;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
