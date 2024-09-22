// problem:
// id:
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

  int n, t;
  cin >> n;
  vi v(100001, 0);
  for (int i = 0; i < n; i++) {
    cin >> t;
    v[t]++;
  }

  if (n % 2 == 1)
    n++;
  n /= 2;
  cout << ((n < *max_element(v.begin(), v.end()) ? "NO\n" : "YES\n"));

  return 0;
}
