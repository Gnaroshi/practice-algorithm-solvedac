// problem: 소수 최소 공배수
// id: 21919
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

  const int SZ = 1000001;
  vi p;
  vb isp(SZ, true);

  for (int i = 2; i < SZ; i++) {
    if (isp[i]) {
      p.push_back(i);
    }
    for (auto j : p) {
      if (i * j >= SZ) {
        break;
      }
      isp[i * j] = false;
      if (i % j == 0) {
        break;
      }
    }
  }

  int n, t;
  cin >> n;
  ll ans = 1;
  set<int> st;
  bool chk = false;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (isp[t]) {
      st.insert(t);
      chk = true;
    }
  }

  if (chk) {
    for (auto i : st) {
      ans *= i;
    }
    cout << ans << '\n';
  } else {
    cout << "-1\n";
  }

  return 0;
}
