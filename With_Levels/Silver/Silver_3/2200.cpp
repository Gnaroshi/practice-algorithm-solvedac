// problem: 계산기
// id: 2200
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

  int n, ans = 0, t;
  string s;
  cin >> n >> t;

  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t != 0) {
      s = to_string(t);
      ans += s.length() + 1;
    }
    ans += 2;
  }

  cout << ans << '\n';

  return 0;
}
