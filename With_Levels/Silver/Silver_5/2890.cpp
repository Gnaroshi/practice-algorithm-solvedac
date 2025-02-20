// problem: 카약
// id: 2890
// tag:
// time taken:

#include <algorithm>
#include <cctype>
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

  string s;
  int r, c;
  cin >> r >> c;
  vs v(r);
  vpi p;
  vi ans(10);
  for (auto &i : v) {
    cin >> i;
  }
  for (auto &i : v) {
    int l = -1, d = -1;
    for (int j = 0; j < c; j++) {
      if (isdigit(i[j])) {
        l = c - j;
        d = i[j] - '0';
        break;
      }
    }
    if (l > -1) {
      p.push_back({l, d});
    }
  }
  sort(p.begin(), p.end());
  int rank = 1;
  ans[p.front().second] = rank;
  for (int i = 1; i < 10; i++) {
    if (p[i].first != p[i - 1].first) {
      rank++;
    }
    ans[p[i].second] = rank;
  }

  for (int i = 1; i <= 9; i++) {
    cout << ans[i] << '\n';
  }

  return 0;
}
