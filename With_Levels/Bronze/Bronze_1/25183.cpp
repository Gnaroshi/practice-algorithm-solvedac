// problem: 인생은 한 방
// id: 25183
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
  string s;
  cin >> n >> s;
  bool chk = false;
  int cur = 1, cnt = 1;
  char bef = s[0];
  for (int i = 1; i < n; i++) {
    if (abs(int(bef - s[i])) == 1) {
      cur++;
      if (cur >= 5) {
        chk = true;
        break;
      }
    } else {
      cnt = max(cnt, cur);
      cur = 1;
    }
    bef = s[i];
  }
  cnt = max(cnt, cur);
  if (cur >= 5) {
    chk = true;
  }
  cout << (chk ? "YES\n" : "NO\n");

  return 0;
}
