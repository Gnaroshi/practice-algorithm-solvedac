// problem: 특별한 학교 탈출
// id: 31669
// tag:
// time taken:

#include <algorithm>
#include <cmath>
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

  int n, m;
  cin >> n >> m;
  vector<string> v(n);
  for (auto &i : v)
    cin >> i;

  int ans = 0x3f3f3f3f;
  for (int i = 0; i < m; i++) {
    bool chk = true;
    for (int j = 0; j < n; j++) {
      if (v[j][i] == 'O') {
        chk = false;
        break;
      }
    }
    if (chk) {
      ans = i + 1;
      break;
    }
  }
  if (ans == 0x3f3f3f3f)
    cout << "ESCAPE FAILED" << '\n';
  else
    cout << ans << '\n';

  return 0;
}
