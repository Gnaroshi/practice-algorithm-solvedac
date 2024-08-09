// problem: 창고지기
// id: 31844
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

  string s;
  int rl = -1, bl = -1, tl = -1, ans = 0;

  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '@')
      rl = i;
    else if (s[i] == '#')
      bl = i;
    else if (s[i] == '!')
      tl = i;
  }

  bool chk = false;
  if ((rl < tl && rl < bl && bl < tl) || (tl < rl && tl < bl && bl < rl)) {
    chk = true;
    ans = abs(tl - rl) - 1;
  }
  cout << (chk ? ans : -1) << "\n";

  return 0;
}
