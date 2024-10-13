// problem: 빙글빙글 스네일
// id: 15722
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

  int n, x = 0, y = 0, cur = 0, cur_state = 0, cur_mul = 1;
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  cin >> n;

  while (true) {
    if (cur == n)
      break;
    for (int i = 0; i < cur_mul; i++) {
      x += dx[cur_state];
      y += dy[cur_state];
      cur++;
      if (cur == n)
        break;
    }
    cur_state++;
    cur_state %= 4;
    if (cur_state == 0 || cur_state == 2)
      cur_mul++;
  }

  cout << x << ' ' << y << '\n';

  return 0;
}
