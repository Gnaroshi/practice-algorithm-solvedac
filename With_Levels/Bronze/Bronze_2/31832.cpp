// problem: 팀명 정하기 2
// id: 31832
// tag:
// time taken:

#include <algorithm>
#include <cctype>
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
  string s, ans;
  cin >> n;
  while (n--) {
    cin >> s;
    if (s.length() > 10)
      continue;
    bool chk = false;
    for (auto i : s) {
      if (isalpha(i) || i == '-') {
        chk = true;
        break;
      }
    }
    if (chk) {
      chk = false;
      int a = 0, b = 0;
      for (auto i : s) {
        if (isalpha(i)) {
          if (isupper(i)) {
            a++;
          } else
            b++;
        }
      }
      if (a <= b)
        ans = s;
    }
  }
  cout << ans << '\n';

  return 0;
}
