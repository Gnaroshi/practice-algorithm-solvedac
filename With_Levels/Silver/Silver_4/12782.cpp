// problem: 비트 우정지수
// id: 12782
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

  int tc;
  cin >> tc;
  while (tc--) {
    string a, b;
    cin >> a >> b;
    int ao = 0, bo = 0, od, ab = 0, iter = a.length();
    for (int i = 0; i < iter; i++) {
      if (a[i] == '0') {
        ao++;
      }
      if (b[i] == '0') {
        bo++;
      }
      if (a[i] != b[i]) {
        ab++;
      }
    }
    od = abs(ao - bo);
    cout << od + max(0, (ab - od) / 2) << '\n';
  }

  return 0;
}
