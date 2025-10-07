// problem: 그래서 대회 이름 뭐로 하죠
// id: 27466
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

bool isv(char c) {
  return !(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  string s, ans = "";
  cin >> s;
  bool chkl = false;
  int acnt = 0;
  for (int i = n - 1; i > 0; i--) {
    if (!chkl) {
      if (isv(s[i])) {
        chkl = true;
        ans += s[i];
      }
    } else {
      if (s[i] == 'A') {
        acnt++;
        if (acnt == 2) {
          ans += "AA";
          if (i >= m - 3) {
            for (int j = 1; j < m - 2; j++) {
              ans += s[i - j];
            }
            reverse(ans.begin(), ans.end());
            cout << "YES\n";
            cout << ans << '\n';
            return 0;
          } else {
            cout << "NO\n";
            return 0;
          }
        }
      }
    }
  }
  cout << "NO\n";

  return 0;
}
