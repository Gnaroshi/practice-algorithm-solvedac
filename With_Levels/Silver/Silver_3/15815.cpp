// problem: 천재 수학자 성필
// id: 15815
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

  int ans = 0, a, b;
  bool chk = true;
  string s;
  cin >> s;

  int sl = s.length();
  stack<int> stk;
  for (int i = 0; i < sl; i++) {
    if (isdigit(s[i])) {
      stk.push(int(s[i] - '0'));
    } else {
      a = stk.top();
      stk.pop();
      b = stk.top();
      stk.pop();
      if (s[i] == '+') {
        stk.push(a + b);
      } else if (s[i] == '-') {
        stk.push(b - a);
      } else if (s[i] == '*') {
        stk.push(a * b);
      } else if (s[i] == '/') {
        stk.push(b / a);
      }
    }
  }

  cout << stk.top() << '\n';

  return 0;
}
