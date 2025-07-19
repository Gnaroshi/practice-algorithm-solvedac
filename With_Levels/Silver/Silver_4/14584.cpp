// problem: 암호 해독
// id: 14584
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

  string s, t, ans;
  cin >> s;
  int n;
  bool chk = false;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (!chk) {
      for (int k = 0; k < 26; k++) {
        string cur = "";
        for (auto j : s) {
          cur += char((j - 'a' + k) % 26 + 'a');
        }
        if (cur.find(t) != string::npos) {
          chk = true;
          ans = cur;
          break;
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
