// problem: 피터팬 프레임
// id: 3054
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
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
using vs = vector<string>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t = "";
  cin >> s;

  int iter = s.length();
  vs ans(5, "");

  for (int i = 0; i < iter * 4 + 1; i++) {
    t += '.';
  }
  for (int i = 0; i < 5; i++)
    ans[i] = t;

  int dx[8] = {0, -1, -2, -1, 0, 1, 2, 1};
  int dy[8] = {2, 1, 0, -1, -2, -1, 0, 1};

  for (int i = 0; i < iter; i++) {
    int cx = 2, cy = 4 * i + 2;
    ans[cx][cy] = s[i];
    if ((i + 1) % 3 != 0) {
      for (int j = 0; j < 8; j++) {
        ans[cx + dx[j]][cy + dy[j]] = '#';
      }
    }
  }

  for (int i = 0; i < iter; i++) {
    int cx = 2, cy = 4 * i + 2;
    ans[cx][cy] = s[i];
    if ((i + 1) % 3 == 0) {
      for (int j = 0; j < 8; j++) {
        ans[cx + dx[j]][cy + dy[j]] = '*';
      }
    }
  }

  for (auto &i : ans) {
    cout << i << '\n';
  }

  return 0;
}
