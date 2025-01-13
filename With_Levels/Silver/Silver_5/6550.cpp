// problem: 부분 문자열
// id: 6550
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

  string s, t;
  while (cin >> s >> t) {
    bool chk = true;
    int sl = s.length(), tl = t.length(), cur = 0;
    if (sl > tl) {
      chk = false;
    } else {
      for (auto &i : t) {
        if (i == s[cur]) {
          cur++;
          if (cur == sl)
            break;
        }
      }
      chk = cur == sl;
    }

    cout << (chk ? "Yes" : "No") << '\n';
  }

  return 0;
}
