// problem: 드높은 남산 위에 우뚝 선
// id: 21965
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

  int n;
  cin >> n;
  vi v(n);
  for (auto &i : v)
    cin >> i;
  bool chk = true;
  bool turn = false;
  int cur = v.front();

  for (int i = 1; i < n; i++) {
    if (cur == v[i]) {
      chk = false;
      break;
    }
    if (turn) {
      if (cur <= v[i]) {
        chk = false;
        break;
      }
    } else {
      if (cur > v[i]) {
        turn = true;
      }
    }
    cur = v[i];
  }
  cout << (chk ? "YES\n" : "NO\n");

  return 0;
}
