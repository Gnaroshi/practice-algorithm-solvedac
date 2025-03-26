// problem: PLAYERJINAH’S BOTTLEGROUNDS
// id: 15803
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

  vector<pair<double, double>> v(3);
  for (auto &i : v) {
    cin >> i.first >> i.second;
  }

  sort(v.begin(), v.end());
  if ((v[0].first - v[1].first) / (v[0].second - v[1].second) ==
      (v[1].first - v[2].first) / (v[1].second - v[2].second)) {
    cout << "WHERE IS MY CHICKEN?\n";
  } else {
    cout << "WINNER WINNER CHICKEN DINNER!\n";
  }

  return 0;
}
