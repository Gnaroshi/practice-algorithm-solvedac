// problem: N번쨰 큰 수
// id: 2693
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    vector<int> v(10);
    for (auto &i : v)
      cin >> i;
    sort(v.begin(), v.end());
    cout << v[7] << '\n';
  }

  return 0;
}
