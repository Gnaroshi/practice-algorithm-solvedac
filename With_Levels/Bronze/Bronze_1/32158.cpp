// problem: SWAPC
// id: 32158
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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

  int n;
  string s;
  cin >> n >> s;

  vi p, c;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'P')
      p.push_back(i);
    else if (s[i] == 'C')
      c.push_back(i);
  }

  int iter = min(p.size(), c.size());
  for (int i = 0; i < iter; i++) {
    s[p[i]] = 'C';
    s[c[i]] = 'P';
  }

  cout << s << '\n';

  return 0;
}
