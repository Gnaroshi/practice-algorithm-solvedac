// problem: 서든어택 3
// id: 22993
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

  ll n, jw;
  cin >> n >> jw;
  vi v(n - 1);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());
  bool chk = true;
  for (int i = 0; i < n - 1; i++) {
    if (v[i] < jw) {
      jw += v[i];
    } else {
      chk = false;
      break;
    }
  }

  cout << (chk ? "Yes" : "No") << '\n';

  return 0;
}
