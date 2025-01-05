// problem: 아시아 정보올림피아드
// id: 2535
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

  int n, a, b, c, mx = 0;
  cin >> n;
  vector<pair<int, pair<int, int>>> v, ans;

  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    v.push_back({c, {a, b}});
    mx = max(mx, a);
  }

  sort(v.begin(), v.end(), greater<>());

  vi chk(mx + 1, 0);

  for (auto i : v) {
    if (chk[i.second.first] < 2) {
      chk[i.second.first]++;
      ans.push_back(i);
      if (ans.size() == 3)
        break;
    }
  }

  for (auto i : ans) {
    cout << i.second.first << ' ' << i.second.second << '\n';
  }

  return 0;
}
