// problem: 햄버거 분배
// id: 19941
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

  int n, k, ans = 0;
  cin >> n >> k;
  string v;
  cin >> v;

  for (int i = 0; i < n; i++) {
    if (v[i] == 'P') {
      int iter = min(i + k + 1, n);
      for (int j = max(i - k, 0); j < iter; j++) {
        if (v[j] == 'H') {
          v[j] = 0;
          ans++;
          break;
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
