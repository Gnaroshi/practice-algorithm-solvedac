// problem: 놀이공원
// id: 2594
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

int fn(int a) { return (a / 100) * 60 + a % 100; }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t, mx = 0, cur, tmx, a, b;
  cin >> n;

  // 1000~2200
  //  600~1320
  const int ST = 600, ED = 1320;
  vi v(ED + 1, 1);
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    a = fn(a), b = fn(b);
    a = max(600, a - 10);
    b = min(1320, b + 10);
    for (int j = a; j < b; j++) {
      v[j] = 0;
    }
  }

  tmx = 0;
  for (int i = ST; i < ED; i++) {
    if (v[i]) {
      tmx++;
    } else {
      mx = max(mx, tmx);
      tmx = 0;
    }
  }

  mx = max(mx, tmx);

  cout << mx << '\n';

  return 0;
}
