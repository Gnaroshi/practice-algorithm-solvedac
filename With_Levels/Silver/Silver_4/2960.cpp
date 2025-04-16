// problem: 에라토스테네스의 체
// id: 2960
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

  int n, k;
  cin >> n >> k;

  vb isp(n + 1, true);
  for (int i = 2; i <= n; i++) {
    if (isp[i]) {
      isp[i] = false;
      k--;
      if (k == 0) {
        cout << i << '\n';
        return 0;
      }
      for (int j = i; j <= n; j += i) {
        if (isp[j]) {
          isp[j] = false;
          k--;
          if (k == 0) {
            cout << j << '\n';
            return 0;
          }
        }
      }
    }
  }

  return 0;
}
