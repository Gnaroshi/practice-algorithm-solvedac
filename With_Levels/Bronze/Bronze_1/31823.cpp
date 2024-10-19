// problem: 악질 검거
// id: 31823
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
using vs = vector<string>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, rscnt = 0;
  cin >> n >> m;

  bool chk[205] = {0};

  vi rsc;
  vs rsn;

  for (int i = 0; i < n; i++) {
    int rs = 0, trs = 0;
    string s;
    char c;
    for (int j = 0; j < m; j++) {
      cin >> c;
      if (c == '.')
        trs++;
      else {
        rs = max(rs, trs);
        trs = 0;
      }
    }
    rs = max(rs, trs);
    trs = 0;
    cin >> s;
    rsc.push_back(rs);
    rsn.push_back(s);

    chk[rs] = 1;
  }

  for (int i = 0; i < 205; i++) {
    rscnt += (chk[i] ? 1 : 0);
  }

  cout << rscnt << '\n';
  for (int i = 0; i < n; i++) {
    cout << rsc[i] << ' ' << rsn[i] << '\n';
  }

  return 0;
}
