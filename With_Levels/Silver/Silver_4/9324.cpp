// problem: 진짜 메시지
// id: 9324
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

  int tc;
  cin >> tc;
  while (tc--) {
    string s;
    cin >> s;
    bool chk = true;
    int l = s.length(), cur;
    vi cnt(26, 0);

    for (int i = 0; i < l; i++) {
      cur = s[i] - 'A';
      cnt[cur]++;
      if (cnt[cur] % 3 == 0) {
        if (i == l - 1) {
          chk = false;
        } else if (s[i + 1] != s[i]) {
          chk = false;
          break;
        } else {
          i++;
        }
      }
      if (!chk) {
      }
    }

    cout << (chk ? "OK" : "FAKE") << '\n';
  }

  return 0;
}
