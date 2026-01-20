// problem: iSharp
// id: 3568
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

  string s, tp;
  getline(cin, tp);
  stringstream st;
  st.str(tp);
  st >> tp;
  vs ans;
  int iter;
  iter = s.length();

  while (st >> s) {
    iter = s.length();
    string t = "", r = "", tans = tp;
    for (int i = 0; i < iter; i++) {
      if (!isalpha(s[i]) && s[i] != ',' && s[i] != ';') {
        r += s[i];
      } else if (isalpha(s[i])) {
        t += s[i];
      }
    }
    iter = r.length();
    for (int i = iter - 1; i >= 0; i--) {
      if (r[i] == '[') {
        tans += ']';
      } else if (r[i] == ']') {
        tans += '[';
      } else {
        tans += r[i];
      }
    }
    tans += ' ';
    tans += t;
    ans.push_back(tans);
  }

  for (auto i : ans) {
    cout << i << ";\n";
  }

  return 0;
}
