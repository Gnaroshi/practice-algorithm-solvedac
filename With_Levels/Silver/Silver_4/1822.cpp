// problem: 차집합
// id: 1822
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

  int n, m, t;
  cin >> n >> m;

  set<int> s;
  set<int>::iterator it;
  for (int i = 0; i < n; i++) {
    cin >> t;
    s.insert(t);
  }

  for (int i = 0; i < m; i++) {
    cin >> t;
    it = s.find(t);
    if (it != s.end()) {
      s.erase(it);
    }
  }

  cout << s.size() << '\n';
  for (it = s.begin(); it != s.end(); it++) {
    cout << *it << (it != prev(s.end()) ? ' ' : '\n');
  }

  return 0;
}
