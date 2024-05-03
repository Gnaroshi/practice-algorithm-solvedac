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

  d.push_back(-0x3f3f3f3f);
  for (int i = 0; i < n; i++) {
    if (d.back() < v[i]) {
      d.push_back(v[i]);
      ans++;
    } else {
      auto it = lower_bound(d.begin(), d.end(), v[i]);
      *it = v[i];
    }
  }

  cout << ans;

  return 0;
}
