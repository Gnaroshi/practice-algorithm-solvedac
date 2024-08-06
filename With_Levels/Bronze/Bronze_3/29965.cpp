// problem: Average scores
// id: 29965
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

  ll n, m = 0, j = 0, t;
  char c;
  cin >> n;
  while (n--) {
    cin >> c >> t;
    if (c == 'M')
      m += t;
    else
      j += t;
  }
  if (m > j)
    cout << "M\n";
  else if (m < j)
    cout << "J\n";
  else
    cout << "V\n";

  return 0;
}
