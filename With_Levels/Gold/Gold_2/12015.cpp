// problem: 가장 긴 증가하는 부분 수열 2
// id: 12015
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
vector<int> d;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  d.push_back(-0x3f3f3f3f);
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (d.back() < t) {
      d.push_back(t);
      ans++;
    } else {
      auto it = lower_bound(d.begin(), d.end(), t);
      *it = t;
    }
  }

  cout << ans << '\n';

  return 0;
}
