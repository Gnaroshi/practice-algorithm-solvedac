// problem: 인기 투표
// id: 11637
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, sm = 0, t, mx;
    cin >> n;
    vpi v;

    for (int i = 1; i <= n; i++) {
      cin >> t;
      v.push_back({t, i});
      sm += t;
    }
    sort(v.begin(), v.end(), greater<>());
    mx = v.front().first;
    if (mx == v[1].first) {
      cout << "no winner";
    } else {
      if (mx * 2 <= sm) {
        cout << "minority";
      } else {
        cout << "majority";
      }
      cout << " winner " << v.front().second;
    }
    cout << "\n";
  }

  return 0;
}
