// problem: Lucky 7
// id: 30224
// tag:
// time taken:

#include <algorithm>
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

  bool a = false, b = false;
  int n;
  cin >> n;
  if (n % 7 == 0)
    b = true;
  while (n > 0) {
    if (n % 10 == 7) {
      a = true;
      break;
    }
    n /= 10;
  }
  if (!a && !b)
    cout << 0 << "\n";
  else if (!a && b)
    cout << 1 << "\n";
  else if (a && !b)
    cout << 2 << "\n";
  else if (a && b)
    cout << 3 << "\n";

  return 0;
}
