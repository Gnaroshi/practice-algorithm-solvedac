// problem: 3단 초콜릿 아이스크림
// id: 28255
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

  int tc;
  cin >> tc;
  while (tc--) {
    string s, sb, r, t, rt;
    int n;
    cin >> s;
    n = s.length() / 3;
    if (s.length() % 3 != 0) {
      n++;
    }

    sb = s.substr(0, n);
    r = s.substr(0, n);
    reverse(r.begin(), r.end());
    t = sb.substr(1);
    rt = r.substr(1);

    cout << (sb + r + sb == s || sb + rt + sb == s || sb + r + t == s ||
             sb + rt + t == s)
         << '\n';
  }

  return 0;
}
