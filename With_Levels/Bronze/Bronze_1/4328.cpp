// problem: 기초 나머지 계산
// id: 4328
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

  int b;
  string p, tm;
  while (true) {
    cin >> b;
    if (b == 0)
      break;
    cin >> p >> tm;

    int ans = 0, m = 0;
    for (auto i : tm) {
      m = m * b;
      m += i - '0';
    }

    if (m == 0) {
      cout << p << '\n';
      continue;
    }

    for (auto i : p) {
      ans = ans * b;
      ans += i - '0';
      ans %= m;
    }

    if (ans == 0)
      cout << 0 << '\n';
    else {
      si s;
      while (ans > 0) {
        s.push(ans % b);
        ans /= b;
      }
      while (!s.empty()) {
        int t = s.top();
        cout << t;
        s.pop();
      }
      cout << '\n';
    }
  }

  return 0;
}
