// problem: 학생 번호
// id: 1235
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

  int n, ans = 1, iter;
  cin >> n;
  vs v(n);
  bool tchk;
  string s;

  for (auto &i : v) {
    cin >> i;
    reverse(i.begin(), i.end());
  }
  iter = v.front().size();
  for (int i = 1; i <= iter; i++) {
    tchk = true;
    set<string> nb;

    for (auto j : v) {
      s = j.substr(0, i);
      if (nb.find(s) != nb.end()) {
        tchk = false;
        break;
      }
      nb.insert(s);
    }
    if (tchk) {
      cout << i << '\n';
      return 0;
    }
  }

  return 0;
}
