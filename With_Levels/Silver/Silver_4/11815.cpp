// problem: 짝수?  홀수?
// id: 11815
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

  int tc;
  cin >> tc;
  vb ans;
  for (int i = 0; i < tc; i++) {
    ll n;
    cin >> n;
    if (ll(sqrt(n)) * ll(sqrt(n)) == n) {
      ans.push_back(true);
    } else {
      ans.push_back(false);
    }
  }

  for (int i = 0; i < tc; i++) {
    cout << ans[i] << (i != tc - 1 ? ' ' : '\n');
  }

  return 0;
}
