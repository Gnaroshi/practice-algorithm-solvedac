// problem: 자작나무가 없소~
// id: 31496
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = 0, d;
  string s, t;
  cin >> n >> s;

  while (n--) {
    cin >> t >> d;
    stringstream st;
    vector<string> vs;
    for (auto &i : t) {
      if (i == '_')
        i = ' ';
    }
    st.str(t);
    while (st >> t) {
      vs.push_back(t);
    }
    for (auto i : vs) {
      if (i == s) {
        ans += d;
        break;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
