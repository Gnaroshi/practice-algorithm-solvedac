// problem: 문자열
// id: 1120
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

int fn(string a, string b, int al) {
  int ret = 0;
  for (int i = 0; i < al; i++) {
    if (a[i] != b[i])
      ret++;
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;
  int al = a.length();
  int bl = b.length();
  int ans = fn(a, b, al);

  if (al == bl) {
    cout << ans;
    return 0;
  }

  for (int i = 0; i <= bl - al; i++) {
    string t;
    for (int j = 0; j <= bl - al - i; j++) {
      t = b.substr(0, i) + a + b.substr(j + al + i - 1, j);
      ans = min(ans, fn(t, b, t.length()));
    }
  }

  cout << ans;

  return 0;
}
