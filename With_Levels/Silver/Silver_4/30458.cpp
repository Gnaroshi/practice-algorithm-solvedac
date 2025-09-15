// problem: 팰린드롬 애너그램
// id: 30458
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

  int n, sl, loc;
  string s;
  cin >> n >> s;

  vi l(26, 0), r(26, 0);

  sl = s.length();
  loc = sl / 2;

  for (int i = 0; i < loc; i++) {
    l[s[i] - 'a']++;
  }

  if (sl % 2 == 1) {
    loc++;
  }

  for (int i = loc; i < sl; i++) {
    r[s[i] - 'a']++;
  }

  bool chk = true;
  for (int i = 0; i < 26; i++) {
    if ((l[i] + r[i]) % 2 == 1) {
      chk = false;
      break;
    }
  }

  // for (auto i : l) {
  //   cout << i << ' ';
  // }
  // cout << "\n";
  // for (auto i : r) {
  //   cout << i << ' ';
  // }
  // cout << "\n";

  cout << (chk ? "Yes" : "No") << '\n';

  return 0;
}
