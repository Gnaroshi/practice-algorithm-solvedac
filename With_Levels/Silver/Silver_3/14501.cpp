// problem: 퇴사
// id: 14501
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
int n, t, p, ans;

vector<pair<int, int>> v;
vector<int> chk;

void fn() {
  for (int i = 0; i <= n; i++) {
    chk[i] = max(ans, chk[i]);
    if (v[i].first + i <= n) {
      chk[v[i].first + i] = max(chk[v[i].first + i], v[i].second + chk[i]);
    }
    ans = max(ans, chk[i]);
  }

  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  chk.resize(n + 1);
  fill(chk.begin(), chk.end(), 0);

  for (int i = 0; i < n; i++) {
    cin >> t >> p;
    v.push_back({t, p});
  }

  fn();
  cout << ans << '\n';

  return 0;
}
