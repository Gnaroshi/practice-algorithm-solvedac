// problem: 폴리오미노
// id: 1343
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

string fn(string s) {
  string ret = "";
  int sl = s.length();
  if (sl % 2 == 1) {
    return "#";
  }
  int a = sl / 4, b = (sl - a * 4) / 2;
  while (a--)
    ret += "AAAA";
  while (b--)
    ret += "BB";

  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, ori, t;
  cin >> s;

  int sl = s.length();
  ori = s;
  for (auto &i : s) {
    if (i == '.')
      i = ' ';
  }

  stringstream st;
  st.str(s);

  vs v;
  while (st >> t) {
    t = fn(t);
    if (t == "#") {
      cout << -1 << '\n';
      return 0;
    }
    v.push_back(t);
  }

  int vloc = 0;
  for (int i = 0; i < sl; i++) {
    if (ori[i] == 'X') {
      cout << v[vloc];
      i += v[vloc].length() - 1;
      vloc++;
    } else
      cout << ori[i];
  }

  return 0;
}
