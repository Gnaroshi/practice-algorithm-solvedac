// problem: 가장 긴 바이토닉 부분 수열
// id: 11054
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

int n, ans, t;
vector<int> v, da, db;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  if (n < 3) {
    cout << n;
    return 0;
  }

  da.resize(n);
  db.resize(n);
  fill(da.begin(), da.end(), 1);
  fill(db.begin(), db.end(), 1);

  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (v[i] > v[j]) {
        if (da[j] + 1 > da[i])
          da[i] = da[j] + 1;
      }
    }
  }

  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= i; j--) {
      if (v[i] > v[j]) {
        if (db[j] + 1 > db[i])
          db[i] = db[j] + 1;
      }
    }
  }
  for (int i = 0; i < n; i++)
    ans = max(ans, da[i] + db[i]);

  cout << ans - 1;

  return 0;
}
