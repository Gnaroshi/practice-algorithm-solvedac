// problem: 수 복원하기
// id: 2312
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

  const int SZ = 100001;
  vb isp(SZ, true);
  vi p;
  for (int i = 2; i <= SZ; i++) {
    if (isp[i]) {
      p.push_back(i);
    }
    for (auto j : p) {
      if (i * j >= SZ) {
        break;
      }
      isp[i * j] = false;
      if (i % j == 0) {
        break;
      }
    }
  }

  int tc, n, cnt;
  cin >> tc;
  while (tc--) {
    cin >> n;
    for (auto i : p) {
      cnt = 0;
      while (true) {
        if (n % i != 0) {
          break;
        }
        cnt++;
        n /= i;
      }
      if (cnt) {
        cout << i << ' ' << cnt << '\n';
      }
      if (n == 1) {
        break;
      }
    }
  }

  return 0;
}
