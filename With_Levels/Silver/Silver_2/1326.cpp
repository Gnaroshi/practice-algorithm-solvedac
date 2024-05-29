// problem: 폴짝폴짝
// id: 1326
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
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

int n, t, a, b, ans;
vi v, vist;

int fn(int k) {
  queue<pii> q;
  q.push({k, 0});
  vist[k] = true;

  while (!q.empty()) {
    int cur = q.front().first, dist = q.front().second;
    int m = v[cur];
    q.pop();
    if (cur == b) {
      ans = dist;
      return 0;
    }

    for (int i = 1;; i++) {
      int nxt = cur + m * i;
      if (nxt > n)
        break;
      if (!vist[nxt]) {
        vist[nxt] = 1;
        q.push({nxt, dist + 1});
      }
    }
    for (int i = 1;; i++) {
      int nxt = cur - m * i;
      if (nxt < 1)
        break;
      if (!vist[nxt]) {
        vist[nxt] = 1;
        q.push({nxt, dist + 1});
      }
    }
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ans = -1;

  cin >> n;
  v.push_back(0);
  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
  }
  vist.resize(n + 1);
  fill(vist.begin(), vist.end(), 0);
  cin >> a >> b;

  fn(a);
  cout << ans << '\n';

  return 0;
}
