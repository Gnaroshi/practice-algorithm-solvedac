// problem: 다음 달에 봐요
// id: 32209
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

  bool chk = true;
  int cnt = 0, q;
  cin >> q;
  while (q--) {
    int x, y;
    cin >> x >> y;
    if (x == 1) {
      cnt += y;
    } else {
      cnt -= y;
      if (cnt < 0) {
        chk = false;
      }
    }
  }

  cout << (chk ? "See you next month" : "Adios") << '\n';

  return 0;
}
