// problem: 최애의 팀원
// id: 29813
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

  int n, t;
  string s;
  cin >> n;
  queue<pair<string, int>> q;
  for (int i = 0; i < n; i++) {
    cin >> s >> t;
    q.push({s, t});
  }
  if (n == 1) {
    cout << q.front().first << '\n';
    return 0;
  }

  auto cur = q.front();
  q.pop();
  while (true) {
    auto nxt = q.front();
    q.pop();
    if (cur.second == 1) {
      if (q.size() != 1) {
        cur = q.front();
        q.pop();
      } else {
        break;
      }
    } else {
      cur.second--;
      q.push(nxt);
    }
  }

  cout << q.front().first << '\n';

  return 0;
}
