// problem: 블라인드
// id: 2799
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

  int n, m;
  cin >> n >> m;
  vi cnt(5, 0);
  vs v(n * 5 + 1);
  for (auto &i : v) {
    cin >> i;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int tcnt = 0;
      for (int k = 0; k < 4; k++) {
        if (v[i * 5 + 1 + k][j * 5 + 1] == '*') {
          tcnt++;
        } else {
          break;
        }
      }
      cnt[tcnt]++;
    }
  }

  for (int i = 0; i < 5; i++) {
    cout << cnt[i] << (i != 4 ? ' ' : '\n');
  }

  return 0;
}
