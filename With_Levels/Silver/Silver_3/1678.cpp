// problem: 기차
// id: 1678
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

  int t, m, n, cur;
  cin >> t >> m >> n;
  string tn;
  vector<pair<int, string>> v;
  for (int i = 0; i < t; i++) {
    cin >> tn;

    while (true) {
      cin >> cur;
      if (cur == -1) {
        break;
      }
      v.push_back({(cur + 60 - m) % 60, tn});
    }
  }

  sort(v.begin(), v.end(), [](auto a, auto b) { return a.first < b.first; });
  cout << v[(n - 1) % v.size()].second << '\n';

  return 0;
}
