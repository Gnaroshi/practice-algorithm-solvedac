// problem: 단어 뒤집기 2
// id: 17413
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

  string s, tmp = "";
  getline(cin, s);

  bool chk = false;
  for (auto i : s) {
    if (chk && i != '>') {
      tmp += i;
    } else if (chk && i == '>') {
      tmp += i;
      cout << tmp;
      tmp = "";
      chk = false;
    } else if (i == '<' && !chk) {
      if (tmp != "") {
        reverse(tmp.begin(), tmp.end());
        cout << tmp;
        tmp = "";
      }
      chk = true;
      tmp += i;
    } else {
      if (i == ' ') {
        reverse(tmp.begin(), tmp.end());
        cout << tmp << ' ';
        tmp = "";
      } else {
        tmp += i;
      }
    }
  }
  if (tmp != "") {
    if (chk) {
      cout << tmp << '\n';
    } else {
      reverse(tmp.begin(), tmp.end());
      cout << tmp << '\n';
    }
  }

  return 0;
}
