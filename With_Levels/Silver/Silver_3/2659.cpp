// problem: 십자카드 문제
// id: 2659
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

  int ans = 0;
  char c;
  string s = "";
  vs v, tans;
  set<string> st;
  for (int i = 0; i < 4; i++) {
    cin >> c;
    s += c;
  }

  for (int i = 0; i < 4; i++) {
    tans.push_back(s);
    s = s.substr(1) + s[0];
  }
  sort(tans.begin(), tans.end());

  for (int i = 1111; i < 10000; i++) {
    bool tchk = true;
    string t = to_string(i);
    for (auto j : t) {
      if (j == '0') {
        tchk = false;
      }
    }

    if (tchk) {
      vs tt;
      for (int j = 0; j < 4; j++) {
        tt.push_back(t);
        t = t.substr(1) + t[0];
      }
      sort(tt.begin(), tt.end());
      st.insert(tt[0]);
    }
  }

  v.assign(st.begin(), st.end());
  sort(v.begin(), v.end());
  auto it = find(v.begin(), v.end(), tans[0]);

  cout << (it - v.begin()) + 1 << "\n";

  return 0;
}
