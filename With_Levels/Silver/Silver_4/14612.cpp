// problem: 김식당
// id: 14612
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

  int n, m, tn, t;
  string o;
  cin >> n >> m;
  vpi v;
  for (int i = 0; i < n; i++) {
    cin >> o;
    if (o[0] == 'o') {
      cin >> tn >> t;
      v.push_back({t, tn});
    } else if (o[0] == 's') {
      sort(v.begin(), v.end());
    } else {
      cin >> tn;
      int iter = v.size();
      for (int i = 0; i < iter; i++) {
        if (v[i].second == tn) {
          v.erase(v.begin() + i);
        }
      }
    }
    if (!v.empty()) {
      int iter = v.size();
      for (int i = 0; i < iter; i++) {
        cout << v[i].second << (i != iter - 1 ? ' ' : '\n');
      }
    } else {
      cout << "sleep\n";
    }
  }

  return 0;
}
