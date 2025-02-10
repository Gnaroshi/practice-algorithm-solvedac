// problem: 자료구조는 정말 최고야
// id: 23253
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

  int n, m, t, cur, nxt;
  cin >> n >> m;

  bool chk = true;

  for (int i = 0; i < m; i++) {
    cin >> t >> cur;
    if (chk) {
      for (int j = 1; j < t; j++) {
        cin >> nxt;
        if (cur < nxt) {
          chk = false;
        }
        cur = nxt;
      }
    } else {
      for (int j = 1; j < t; j++)
        cin >> nxt;
    }
  }

  cout << (chk ? "Yes" : "No") << '\n';

  return 0;
}
