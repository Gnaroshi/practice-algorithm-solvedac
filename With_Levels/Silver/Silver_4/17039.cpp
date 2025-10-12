// problem: Sleepy Cow Herding (Bronze)
// id: 17039
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

  vi c(3);
  for (auto &i : c) {
    cin >> i;
  }

  sort(c.begin(), c.end());

  if (c.back() - c.front() == 2) {
    cout << 0 << "\n";
  } else if (c[1] - c[0] == 2) {
    cout << 1 << "\n";
  } else if (c[2] - c[1] == 2) {
    cout << 1 << "\n";
  } else {
    cout << 2 << "\n";
  }

  cout << max(c[1] - c[0], c[2] - c[1]) - 1 << '\n';

  return 0;
}
