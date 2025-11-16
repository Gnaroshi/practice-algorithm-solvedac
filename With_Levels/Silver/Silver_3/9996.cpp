// problem: 한국이 그리울 땐 서버에 접속하지
// id: 9996
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

  int n, loc, ls, rs;
  string s, l, r, t;
  cin >> n >> s;

  loc = s.find('*');

  l = s.substr(0, loc);
  r = s.substr(loc + 1);
  ls = l.size();
  rs = r.size();

  for (int i = 0; i < n; i++) {
    cin >> t;
    bool chk = false;
    if (ls + rs > t.size()) {
      cout << "NE\n";
      continue;
    }

    if (l == t.substr(0, ls) && r == t.substr(t.size() - rs)) {
      chk = true;
    }

    cout << (chk ? "DA" : "NE") << '\n';
  }

  return 0;
}
