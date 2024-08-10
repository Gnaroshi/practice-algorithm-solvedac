// problem: 정육면체의 네 꼭짓점
// id: 31945
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

  int p[8][3];
  for (int i = 0; i < 8; i++) {
    int t = i;
    for (int j = 0; j < 3; j++) {
      p[i][j] = t % 2;
      t /= 2;
    }
  }

  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool chk = false;
    for (int i = 0; i < 3; i++) {
      if (p[a][i] == p[b][i] && p[b][i] == p[c][i] && p[c][i] == p[d][i]) {
        chk = true;
        break;
      }
    }
    cout << (chk ? "YES\n" : "NO\n");
  }

  return 0;
}
