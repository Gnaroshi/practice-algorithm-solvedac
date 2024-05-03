// problem: 가장 큰 증가하는 부분 수열
// id: 11055
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

int n, t, ans;
vector<int> v, d;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
  }

  d.resize(n);

  for (int i = 0; i < n; i++) {
    int ts = 0;
    for (int j = 0; j < n; j++) {
      if (v[i] > v[j]) {
        if (ts < d[j])
          ts = d[j];
      }
    }
    d[i] = ts + v[i];
    ans = max(ans, d[i]);
  }

  cout << ans << '\n';

  return 0;
}
