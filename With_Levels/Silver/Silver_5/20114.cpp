// problem: 미아 노트
// id: 20114
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

string qm(int n) {
  string ret = "";
  for (int i = 0; i < n; i++) {
    ret += '?';
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, h, w, l;
  cin >> n >> h >> w;
  vs v(h);
  string t, ans;
  for (auto &i : v) {
    cin >> i;
  }
  l = v.front().length();
  t = qm(l);
  ans = qm(n);

  for (auto &i : v) {
    for (int j = 0; j < l; j++) {
      if (i[j] != '?') {
        t[j] = i[j];
      }
    }
  }

  for (int i = 0; i < l; i += w) {
    string p = t.substr(i, w);
    for (auto &j : p) {
      if (j != '?') {
        ans[i / w] = j;
        break;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
