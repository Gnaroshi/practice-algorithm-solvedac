// problem: 🐜 기적의 매매법 🐜
// id: 20546
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

  int ac = 0, bc = 0, a = 0, b = 0, n;
  vi v(14);
  cin >> n;
  for (auto &i : v)
    cin >> i;
  a = b = n;

  for (auto &i : v) {
    if (a >= i) {
      ac += a / i;
      a %= i;
    }
  }

  for (int i = 3; i < 14; i++) {
    if (v[i - 3] > v[i - 2] && v[i - 2] > v[i - 1] && v[i - 1] > v[i]) {
      if (b >= v[i]) {
        bc += b / v[i];
        b %= v[i];
      }

    } else if (v[i - 3] < v[i - 2] && v[i - 2] < v[i - 1] && v[i - 1] < v[i]) {
      b += v[i] * bc;
      bc = 0;
    }
  }

  a += ac * v.back();
  b += bc * v.back();

  if (a < b)
    cout << "TIMING\n";
  else if (a > b)
    cout << "BNP\n";
  else
    cout << "SAMESAME\n";

  return 0;
}
