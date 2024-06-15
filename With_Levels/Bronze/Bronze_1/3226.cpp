// problem: 전화 요금
// id: 3226
// tag:
// time taken:

#include <algorithm>
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

pii fn(string s) {
  string h, m;
  h = s.substr(0, 2);
  m = s.substr(3, 2);
  return {stoi(h), stoi(m)};
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc, d, ans = 0;
  string s;
  cin >> tc;
  while (tc--) {
    int sh, sm, eh, em;
    cin >> s >> d;
    tie(sh, sm) = fn(s);
    eh = sh, em = sm + d;
    if (em >= 60) {
      eh++, em -= 60;
      eh %= 24;
    }

    if (sh == 6 && eh == 7) {
      ans += (em * 10 + (d - em) * 5);
    } else if (sh == 18 && eh == 19) {
      ans += (em * 5 + (d - em) * 10);
    } else {
      if (6 < sh && sh < 19)
        ans += d * 10;
      else
        ans += d * 5;
    }
  }
  cout << ans << '\n';

  return 0;
}
