// problem: 이전 순열
// id: 10973
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

  int n;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  int loc = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i - 1] > v[i]) {
      loc = i - 1;
      break;
    }
  }

  if (loc == -1) {
    cout << loc << '\n';
    return 0;
  }

  for (int i = n - 1; i >= 0; i--) {
    if (v[i] < v[loc]) {
      swap(v[i], v[loc]);
      break;
    }
  }

  sort(v.begin() + loc + 1, v.end(), greater<>());

  for (int i = 0; i < n; i++) {
    cout << v[i] << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
