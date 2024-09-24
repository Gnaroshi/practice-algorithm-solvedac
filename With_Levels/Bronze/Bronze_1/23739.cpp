// problem: 벼락치기
// id: 23739
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

  int n, ans = 0, t, cur = 0;
  cin >> n;
  vi v(n);
  for (auto &i : v)
    cin >> i;
  for (int i = 0; i < n; i++) {
    if (v[i] <= 60)
      ans++;
    cur = 30 - v[i];
    if (cur > 0) {
      for (int j = i + 1; j < n; j++) {
        if (v[j] <= cur) {
          cur -= v[j];
          ans++;
          i++;
        } else if (cur != 0) {
          if (v[j] <= cur * 2) {
            ans++;
          }
          i++;
          break;
        } else
          break;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
