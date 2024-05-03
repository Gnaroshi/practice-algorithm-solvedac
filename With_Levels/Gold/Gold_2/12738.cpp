// problem: 가장 긴 증가하는 부분 수열 3
// id: 12738
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

int n, t;
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
    } else {
      auto it = lower_bound(d.begin(), d.end(), t);
      *it = t;
    }
  }

  cout << d.size() - 1;

  return 0;
}
