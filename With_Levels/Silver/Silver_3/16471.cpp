// problem: 작은 수 내기
// id: 16471
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

  int n, cnt = 0, ed, loc;
  cin >> n;
  ed = (n + 1) / 2;
  vi a(n), b(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  loc = 0;
  for (int i = 0; i < n; i++) {
    if (a[loc] < b[i]) {
      cnt++;
      loc++;
    }
    if (cnt >= ed) {
      break;
    }
  }

  cout << (cnt >= ed ? "YES" : "NO") << '\n';

  return 0;
}
