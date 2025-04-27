// problem: 수열
// id: 2491
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

  int n, mx_inc = 1, mx_dec = 1, bef, cur, cnt_inc = 1, cnt_dec = 1;
  cin >> n >> bef;
  for (int i = 1; i < n; i++) {
    cin >> cur;
    if (cur < bef) {
      mx_inc = max(mx_inc, cnt_inc);
      cnt_inc = 1;
      cnt_dec++;
    } else if (cur > bef) {
      mx_inc = max(mx_inc, cnt_dec);
      cnt_dec = 1;
      cnt_inc++;
    } else {
      cnt_inc++;
      cnt_dec++;
    }
    bef = cur;
  }

  mx_inc = max(mx_inc, cnt_inc);
  mx_dec = max(mx_dec, cnt_dec);
  cout << max(mx_inc, mx_dec) << '\n';

  return 0;
}
