// problem: 민균이의 비밀번호
// id: 9933
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> a(n), b(n);
  bool chk = false;
  string ans;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    string t = a[i];
    reverse(t.begin(), t.end());
    b[i] = t;
    if (a[i] == b[i]) {
      chk = true;
      ans = a[i];
    }
  }
  if (chk) {
    cout << ans.length() << ' ' << ans[ans.length() / 2] << '\n';
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == b[j]) {
        cout << a[i].length() << ' ' << a[i][a[i].length() / 2] << '\n';
        return 0;
      }
    }
  }

  return 0;
}
