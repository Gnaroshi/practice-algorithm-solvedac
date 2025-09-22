// problem: 병약한 영정
// id: 14670
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

  int n, r, a, b;
  cin >> n;

  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    mp[a] = b;
  }

  cin >> r;
  for (int i = 0; i < r; i++) {
    cin >> a;
    vi ans;
    bool chk = true;
    for (int j = 0; j < a; j++) {
      cin >> b;
      if (mp.find(b) != mp.end()) {
        ans.push_back(mp[b]);
      } else {
        chk = false;
      }
    }

    if (chk) {
      int iter = ans.size();
      for (int j = 0; j < iter; j++) {
        cout << ans[j] << (j != iter - 1 ? ' ' : '\n');
      }
    } else {
      cout << "YOU DIED\n";
    }
  }

  return 0;
}
