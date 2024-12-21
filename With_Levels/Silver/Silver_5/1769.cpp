// problem: 3의 배수
// id: 1769
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

  string s, t;
  int cnt = 0, it;
  cin >> s;
  if (s.length() < 2) {
    cout << cnt << '\n';
    if ((s[0] - '0') % 3 == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }

    return 0;
  }
  while (true) {
    cnt++;
    t = "";
    it = 0;
    for (auto &i : s) {
      it += (i - '0');
    }
    if (it < 10) {
      break;
    }
    s = to_string(it);
  }

  cout << cnt << '\n';
  if (it % 3 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
