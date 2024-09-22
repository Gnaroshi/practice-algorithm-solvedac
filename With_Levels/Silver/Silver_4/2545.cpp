// problem: 팬케익 먹기
// id: 2545
// tag:
// time taken:

#include <algorithm>
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

  int tc;
  cin >> tc;
  while (tc--) {
    vll v(3);
    ll d, e = 0, t, tt;

    for (auto &i : v) {
      cin >> i;
      e += i;
    }
    cin >> d;
    e -= d;
    sort(v.begin(), v.end());

    t = min(e / 3, v[0]);
    tt = t;
    e -= t;
    t = min(e / 2, v[1]);
    cout << (tt * t * (e - t)) << '\n';
  }

  return 0;
}
