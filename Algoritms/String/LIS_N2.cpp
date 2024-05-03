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
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (v[i] > v[j]) {
        if (cnt < d[j])
          cnt = d[j];
      }
    }
    d[i] = cnt + 1;
    ans = max(ans, cnt);
  }

  return 0;
}
