// problem: PlayStation이 아니에요
// id: 32132
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

  int n, loc = 2;
  string s, ans = "";
  cin >> n >> s;

  for (int i = 0; i < 2; i++)
    ans += s[i];
  for (int i = 2; i < n; i++) {
    if (ans[loc - 2] == 'P' && ans[loc - 1] == 'S') {
      if (s[i] == '4' || s[i] == '5')
        continue;
    }
    ans += s[i];
    loc++;
  }
  cout << ans << '\n';

  return 0;
}
