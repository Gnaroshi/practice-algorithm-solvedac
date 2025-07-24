// problem: 수학은 체육과목 입니다 3
// id: 22351
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

  string s, sa;
  cin >> s;

  if (s.length() == 1) {
    cout << s << ' ' << s << "\n";
    return 0;
  }

  int a, al = 1, b, sl = s.length();
  sa = s.substr(0, al);
  a = stoi(sa);
  string tmp;
  while (true) {
    tmp = to_string(a);
    for (int i = a + 1;; i++) {
      if (tmp.length() >= sl) {
        break;
      }
      tmp += to_string(i);
      b = i;
    }

    if (tmp == s) {
      cout << a << ' ' << b << '\n';
      return 0;
    }
    al++;
    sa = s.substr(0, al);
    a = stoi(sa);
    if (al == sl) {
      b = a;
      cout << a << ' ' << b << '\n';
      return 0;
    }
  }

  return 0;
}
