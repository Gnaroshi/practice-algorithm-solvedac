// problem: 전쟁 -  땅따먹기
// id: 1270
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

  int n, m;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> m;
    ll mxn = -1, mxf = 0, tn;
    unordered_map<ll, int> ump;
    for (int j = 0; j < m; j++) {
      cin >> tn;
      ump[tn]++;
      if (ump[tn] > mxf) {
        mxf = ump[tn];
        mxn = tn;
      }
    }

    if (mxf > (m / 2)) {
      cout << mxn << '\n';
    } else {
      cout << "SYJKGW\n";
    }
  }

  return 0;
}
