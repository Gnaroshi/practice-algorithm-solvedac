// problem: Best Chance
// id: 31800
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
  vi a(n), ta(n), b(n), mxo(n, 0);
  for (auto &i : a)
    cin >> i;
  for (auto &i : b)
    cin >> i;

  copy(a.begin(), a.end(), ta.begin());
  // for (auto i : ta)
  //   cout << i << ' ';
  // cout << "\n---------------------\n";
  sort(ta.begin(), ta.end(), greater<>());

  for (int i = 0; i < n; i++) {
    if (a[i] != ta[0]) {
      mxo[i] = ta[0] - b[i];
    } else
      mxo[i] = ta[1] - b[i];
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] - mxo[i] - b[i] << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
