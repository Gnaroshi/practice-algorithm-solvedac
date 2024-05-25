// problem: 팰린드롬 만들기
// id: 1254
// tag:
// time taken:

#include <algorithm>
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
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

int fn(string s) {
  int l = s.length(), iter = l / 2;
  for (int i = 0; i < iter; i++) {
    if (s[i] != s[l - i - 1])
      return 0x3f3f3f3f;
  }
  return l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, rs, t;
  int l, ans = 0x3f3f3f3f;
  cin >> s;
  l = s.length();
  rs = s;
  reverse(rs.begin(), rs.end());

  for (int i = 0; i <= l; i++) {
    t = s + rs.substr(i);
    ans = min(ans, fn(t));
  }

  cout << ans << '\n';

  return 0;
}
