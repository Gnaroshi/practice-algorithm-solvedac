// problem: 손가락 게임
// id: 31866
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

  int a, b;
  cin >> a >> b;
  if ((a == 0 && b == 0) || (a == 2 && b == 2) || (a == 5 && b == 5)) {
    cout << '=';
  } else if ((a == 0 && b == 5) || (a == 2 && b == 0) || (a == 5 && b == 2)) {
    cout << '<';
  } else if ((a == 5 && b == 0) || (a == 0 && b == 2) || (a == 2 && b == 5)) {
    cout << '>';
  } else if ((a != 0) && (a != 2) && (a != 5)) {
    if ((b != 0) && (b != 2) && (b != 5)) {
      cout << '=';
    } else
      cout << '<';
  } else if ((b != 0) && (b != 2) && (b != 5)) {
    if ((a != 0) && (a != 2) && (a != 5)) {
      cout << '=';
    } else
      cout << '>';
  }
  cout << '\n';
  return 0;
}
