// problem: 더하기 2
// id: 10823
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s = "", t;
  ll ans = 0, n;
  while (getline(cin, t)) {
    s += t;
  }
  for (auto &i : s) {
    if (i == ',')
      i = ' ';
  }
  stringstream st;
  st.str(s);
  while (st >> n) {
    ans += n;
  }
  cout << ans << '\n';

  return 0;
}
