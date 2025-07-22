// problem: 가장 긴 단어
// id: 5637
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

  int mx = 0;
  string ans = "";
  while (true) {
    string s, t;
    getline(cin, s);
    stringstream st;
    st.str(s);

    while (st >> t) {
      if (t == "E-N-D") {
        for (auto i : ans) {
          cout << char(tolower(i));
        }
        return 0;
      }
      int tcnt = 0, iter = t.length(), s = 0, e = -1;
      bool w = false;
      for (int i = 0; i <= iter; i++) {
        if (i < iter && (isalpha(t[i]) || (t[i] == '-'))) {
          if (!w) {
            w = true;
            s = i;
          }
          tcnt++;
        } else if (w) {
          if (tcnt > mx) {
            mx = tcnt;
            ans = t.substr(s, tcnt);
          }
          w = false;
          tcnt = 0;
        }
      }
    }
  }

  return 0;
}
