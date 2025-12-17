// problem: 대표 자연수
// id: 2548
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

  int n, mn = 0x3f3f3f3f;
  cin >> n;
  vi v(n);
  for (auto &i : v) {
    cin >> i;
  }
  sort(v.begin(), v.end());
  if (n % 2 == 0) {
    cout << v[n / 2 - 1] << "\n";
  } else {
    cout << v[n / 2] << '\n';
  }

  return 0;
}
