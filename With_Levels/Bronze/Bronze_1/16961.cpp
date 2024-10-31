// problem: 탭 vs 공백
// id: 16961
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

  int n, s, e;
  char c;
  cin >> n;

  vi v(367, 0), tp(367, 0), sp(367, 0);
  vi ans(5, 0);

  for (int i = 0; i < n; i++) {
    cin >> c >> s >> e;
    if (c == 'T') {
      for (int j = s; j <= e; j++)
        tp[j]++;
    } else if (c == 'S') {
      for (int j = s; j <= e; j++)
        sp[j]++;
    }
    ans[4] = max(ans[4], e - s + 1);
  }

  for (int i = 1; i <= 366; i++) {
    v[i] = tp[i] + sp[i];
    ans[1] = max(ans[1], v[i]);
    if (v[i] != 0)
      ans[0]++;
    if (tp[i] == sp[i] && v[i] != 0) {
      ans[2]++;
      ans[3] = max(ans[3], v[i]);
    }
  }

  for (auto i : ans) {
    cout << i << '\n';
  }

  return 0;
}
