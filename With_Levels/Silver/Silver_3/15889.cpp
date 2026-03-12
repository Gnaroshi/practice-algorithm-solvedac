// problem:  호 안에 수류탄이야!!
// id: 15889
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

  int n, t;
  cin >> n;
  vi v(n), d(n - 1);
  string a = "권병장님, 중대장님이 찾으십니다\n";
  string b = "엄마 나 전역 늦어질 것 같아\n";

  for (auto &i : v) {
    cin >> i;
  }

  for (auto &i : d) {
    cin >> i;
  }

  if (n == 1) {
    cout << a;
    return 0;
  }

  t = v.back();
  for (int i = n - 2; i > 0; i--) {
    if (v[i] + d[i] >= t) {
      t = v[i];
    }
  }

  if (v[0] + d[0] >= t) {
    cout << a;
  } else {
    cout << b;
  }

  return 0;
}
