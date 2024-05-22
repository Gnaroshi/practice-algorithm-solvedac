// problem: 안녕
// id: 1535
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
int n, ta, tb, ans;
vector<int> a, b;
vector<bool> chk;

void fn(int cur, int asum, int bsum) {
  for (int i = cur; i < n; i++) {
    if (chk[i] == 0) {
      if (asum + a[i] < 100) {
        chk[i] = 1;
        ans = max(ans, bsum + b[i]);
        fn(i, asum + a[i], bsum + b[i]);
        chk[i] = 0;
      }
    }
  }

  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  chk.resize(n);
  fill(chk.begin(), chk.end(), 0);
  for (int i = 0; i < n; i++) {
    cin >> ta;
    a.push_back(ta);
  }

  for (int i = 0; i < n; i++) {
    cin >> tb;
    b.push_back(tb);
  }

  ans = 0;
  fn(0, 0, 0);
  cout << ans << '\n';

  return 0;
}
