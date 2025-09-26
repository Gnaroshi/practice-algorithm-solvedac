// problem: 오리와 박수치는 춘배
// id: 30404
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

  int n, k, cur, x, cnt = 1;
  cin >> n >> k;
  cin >> x;
  cur = x + k;
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (x <= cur) {
      continue;
    } else {
      cnt++;
      cur = x + k;
    }
  }

  cout << cnt << '\n';

  return 0;
}
