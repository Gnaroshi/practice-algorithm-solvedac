// problem: 사이클 단어
// id: 1544
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

  int n;
  cin >> n;
  vs v;
  vi lchk(51, false);
  string s;
  cin >> s;
  v.push_back(s);
  lchk[s.length()] = true;

  for (int i = 1; i < n; i++) {
    cin >> s;
    int l = s.length();

    if (lchk[l] == false) {
      v.push_back(s);
      lchk[l] = true;
      continue;
    }

    bool chk = true;
    vs rot;
    for (int j = 0; j < l; j++) {
      rot.push_back(s.substr(j + 1, l - j - 1) + s.substr(0, j + 1));
    }

    for (auto j : v) {
      if (j.length() != l) {
        continue;
      }
      for (auto k : rot) {
        if (j == k) {
          chk = false;
          break;
        }
      }
    }

    if (chk) {
      v.push_back(s);
    }
  }

  cout << v.size() << "\n";

  return 0;
}
