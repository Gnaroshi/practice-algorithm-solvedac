// problem: 모험의 시작
// id: 31789
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

  int n, x, s, c, p;
  cin >> n >> x >> s;
  bool chk = false;
  for (int i = 0; i < n; i++) {
    cin >> c >> p;
    if (c <= x && p > s) {
      chk = true;
    }
  }

  cout << (chk ? "YES\n" : "NO\n");

  return 0;
}
