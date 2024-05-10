// problem: 수열 정렬
// id: 1015
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t;
  cin >> n;
  vector<pair<int, int>> v(n);
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    cin >> t;
    v[i] = {t, i};
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++)
    ans[v[i].second] = i;

  for (auto i : ans)
    cout << i << ' ';
  cout << '\n';

  return 0;
}
