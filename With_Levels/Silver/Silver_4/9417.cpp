// problem: 최대 GCD
// id: 9417
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
  cin.ignore();
  while (tc--) {
    string s;
    int n;
    getline(cin, s);
    stringstream st;
    st.str(s);
    vi v;
    while (st >> n) {
      v.push_back(n);
    }

    int ans = 1, iter = v.size(), t;
    for (int i = 0; i < iter; i++) {
      for (int j = i + 1; j < iter; j++) {
        t = gcd(v[i], v[j]);
        ans = max(ans, t);
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
