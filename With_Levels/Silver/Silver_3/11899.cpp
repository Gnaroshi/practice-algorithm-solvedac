// problem: 괄호 끼워넣기
// id: 11899
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

  string s;
  int ans = 0, iter;
  stack<char> stk;
  cin >> s;

  iter = s.length();

  for (int i = 0; i < iter; i++) {
    if (s[i] == '(') {
      stk.push('(');
    } else {
      if (stk.empty()) {
        ans++;
      } else {
        if (stk.top() == '(') {
          stk.pop();
        } else {
          ans++;
        }
      }
    }
  }
  while (!stk.empty()) {
    stk.pop();
    ans++;
  }

  cout << ans << '\n';

  return 0;
}
