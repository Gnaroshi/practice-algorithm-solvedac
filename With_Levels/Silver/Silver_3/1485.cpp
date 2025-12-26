// problem: 정사각형
// id: 1485
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

ll fn(pii a, pii b) {
  ll dx = a.first - b.first;
  ll dy = a.second - b.second;
  return dx * dx + dy * dy;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    vll v;
    vpll p(4);
    for (auto &i : p) {
      cin >> i.first >> i.second;
    }

    for (int i = 0; i < 4; i++) {
      for (int j = i + 1; j < 4; j++) {
        v.push_back(fn(p[i], p[j]));
      }
    }

    sort(v.begin(), v.end());
    if (v[0] == 0) {
      cout << 0;
    }

    if (v[0] == v[1] && v[1] == v[2] && v[2] == v[3] && v[4] == v[5] &&
        v[4] == 2 * v[0]) {
      cout << 1;
    } else {
      cout << 0;
    }
    cout << '\n';
  }

  return 0;
}
