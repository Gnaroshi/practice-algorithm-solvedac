// problem: 칩 만들기
// id: 2236
// tag:
// time taken:

#include <algorithm>
#include <functional>
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, t;
  cin >> n >> k;
  vpi v;
  vi ans(51);
  queue<int> q;
  for (int i = 1; i <= n; i++) {
    cin >> t;
    v.push_back({t, i});
  }
  sort(v.begin(), v.end(), greater<>());
  fill(ans.begin(), ans.end(), 0);
  for (int i = 0; i < k; i++) {
    ans[v[i].second] = v[i].second;
    q.push((v[i].second));
  }

  while (!q.empty()) {
    cout << q.front() << '\n';
    q.pop();
  }
  for (int i = 1; i <= n; i++)
    cout << ans[i] << '\n';

  return 0;
}
