// problem: B번 - Space-A
// id:
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

int n, k, ans, a, b;
string op;
set<pair<int, int>> vst, cur;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> op >> k;
  vector<pair<int, int>> v(k);
  for (int i = 0; i < k; i++) {
    cin >> v[i].first >> v[i].second;
  }
  vst.insert({1, 1});
  cur.insert({1, 1});

  for (auto c : op) {
    set<pair<int, int>> nxt;
    for (auto &p : cur) {
      int x = p.first, y = p.second;
      if (c == 'R')
        nxt.insert({x + 1, y});
      else if (c == 'U')
        nxt.insert({x, y + 1});
      else
        nxt.insert({x + 1, y + 1});
    }
    vst.insert(nxt.begin(), nxt.end());
    cur = nxt;
  }

  for (const auto &p : v) {
    if (vst.count(p))
      ans++;
  }

  cout << ans << '\n';

  return 0;
}
