// problem: 변수명
// id: 16205
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

vector<string> decomposer(int n, string s) {
  vector<string> ret;
  string t;

  if (n == 1 || n == 3) {
    t = "";
    for (auto i : s) {
      if (isupper(i)) {
        if (t != "") {
          ret.push_back(t);
          t = "";
        }
      }
      t += tolower(i);
    }
    if (t.length() != 0)
      ret.push_back(t);

    return ret;
  }

  if (n == 2) {
    t = "";
    for (auto i : s) {
      if (i == '_') {
        ret.push_back(t);
        t = "";
        continue;
      }
      t += tolower(i);
    }
    if (t.length() != 0)
      ret.push_back(t);

    return ret;
  }

  ret.push_back(s);

  return ret;
}

string to_camel(vector<string> v) {
  string ret = "";
  int iter = v.size();
  ret += v.front();
  for (int i = 1; i < iter; i++) {
    ret += toupper(v[i].front());
    ret += v[i].substr(1);
  }
  return ret;
}

string to_snake(vector<string> v) {
  string ret = "";
  int iter = v.size();
  ret += v.front();
  for (int i = 1; i < iter; i++) {
    ret += '_';
    ret += v[i];
  }
  return ret;
}

string to_pascal(vector<string> v) {
  string ret = "";
  int iter = v.size();
  for (int i = 0; i < iter; i++) {
    ret += toupper(v[i].front());
    ret += v[i].substr(1);
  }
  return ret;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string s;
  cin >> n >> s;

  vector<string> d = decomposer(n, s);
  // cout << "-----------\n";
  // for (auto i : d) {
  //   cout << i << " | ";
  //   cout << '\n';
  // }

  cout << to_camel(d) << '\n';
  cout << to_snake(d) << '\n';
  cout << to_pascal(d) << '\n';

  return 0;
}
