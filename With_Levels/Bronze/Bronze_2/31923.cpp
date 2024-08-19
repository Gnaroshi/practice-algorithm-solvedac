// problem: 마라탕후루
// id: 31923
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

  int n, p, q;
  cin >> n >> p >> q;
  vi a(n), b(n);
  for (auto &i : a)
    cin >> i;
  for (auto &i : b)
    cin >> i;

  bool chk = true;
  vi ans(n, 0);
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i])
      continue;
    if (p == q) {
      chk = false;
      break;
    }
    if (a[i] < b[i]) {
      if (p < q) {
        chk = false;
        break;
      }
      for (int j = 0; j <= 10000; j++) {
        a[i] += p;
        b[i] += q;
        if (a[i] > b[i]) {
          chk = false;
          break;
        } else if (a[i] == b[i]) {
          ans[i] = j + 1;
          break;
        }
      }
      if (!chk)
        break;
    } else if (a[i] > b[i]) {
      if (p > q) {
        chk = false;
        break;
      }
      for (int j = 0; j <= 10000; j++) {
        a[i] += p;
        b[i] += q;
        if (a[i] < b[i]) {
          chk = false;
          break;
        } else if (a[i] == b[i]) {
          ans[i] = j + 1;
          break;
        }
      }
      if (!chk)
        break;
    }
  }

  for (auto i : ans) {
    if (i == 10000) {
      chk = false;
      break;
    }
  }
  if (chk) {
    cout << "YES\n";
    for (auto i : ans)
      cout << i << ' ';
  } else
    cout << "NO\n";

  return 0;
}
