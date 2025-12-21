// problem: Java vc C++
// id: 3613
// tag:
// time taken:

#include <algorithm>
#include <cctype>
#include <cmath>
#include <ios>
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

  string s, t;
  cin >> s;
  bool java = false, cpp = false, isE = false;
  int iter = s.length();
  for (int i = 0; i < iter; i++) {
    if (s[i] == '_') {
      java = true;
      if (i != iter - 1) {
        if (s[i + 1] == '_') {
          isE = true;
        }
      }
    }
    if (isupper(s[i])) {
      cpp = true;
    }
  }

  if (s.front() == '_' || s.back() == '_') {
    isE = true;
  }
  if (isupper(s.front())) {
    isE = true;
  }
  if (isE || (java && cpp)) {
    cout << "Error!\n";
  } else if (java) {
    for (auto &i : s) {
      if (i == '_') {
        i = ' ';
      }
    }
    stringstream st;
    st.str(s);
    bool isF = false;
    while (st >> t) {
      if (isF) {
        cout << char(toupper(t[0])) << t.substr(1);
      } else {
        cout << t;
        isF = true;
      }
    }
    cout << '\n';
  } else if (cpp) {
    for (auto &i : s) {
      if (isupper(i)) {
        cout << '_';
      }
      cout << char(tolower(i));
    }

    cout << '\n';
  } else {
    cout << s << '\n';
  }

  return 0;
}
