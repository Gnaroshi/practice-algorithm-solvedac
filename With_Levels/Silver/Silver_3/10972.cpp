// problem: 다음 순열
// id: 10972
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

  int n;
  cin >> n;

  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }

  int loc = n - 1;
  while (loc > 0 && v[loc - 1] >= v[loc]) {
    loc--;
  }

  if (loc == 0) {
    cout << "-1\n";
    return 0;
  }

  int t = n - 1, locv = v[loc - 1];
  while (v[t] <= locv) {
    t--;
  }

  swap(v[loc - 1], v[t]);
  t = n - 1;

  while (loc < t) {
    swap(v[loc], v[t]);
    loc++, t--;
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
