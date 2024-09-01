// problem: 히든 넘버
// id: 8595
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

  int n;
  ll ans = 0;
  string s, t;
  cin >> n >> s;

  t = "";
  vector<string> v;
  for (int i = 0; i < n; i++) {
    if (isalpha(s[i])) {
      if (t.length() != 0) {
        v.push_back(t);
        t = "";
      }
    } else
      t += s[i];
  }
  if (t.length() != 0) {
    v.push_back(t);
  }
  for (auto i : v) {
    ans += stoll(i);
  }
  cout << ans << '\n';

  return 0;
}
