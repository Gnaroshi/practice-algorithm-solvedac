// problem: 전공책
// id: 16508
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

vi fn(string s) {
  vi ret(26, 0);
  for (auto &i : s) {
    ret[i - 'A']++;
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string tgt, t;
  int n, ans = 0x3f3f3f3f;
  cin >> tgt >> n;
  vvi cnt(n);
  vi pr(n), chk = fn(tgt), tot(26, 0);

  // cout << "chk: ";
  // for (auto i : chk) {
  //   cout << i << ' ';
  // }

  for (int i = 0; i < n; i++) {
    cin >> pr[i] >> t;
    cnt[i] = fn(t);
  }

  bool fnd = false;
  int iter = (1 << n);
  for (int i = 1; i < iter; i++) {
    vi tcnt(26, 0);
    int tpr = 0;

    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        for (int k = 0; k < 26; k++) {
          tcnt[k] += cnt[j][k];
        }
        tpr += pr[j];
      }
    }
    bool tfnd = true;
    for (int k = 0; k < 26; k++) {
      if (tcnt[k] < chk[k]) {
        tfnd = false;
        break;
      }
    }

    if (tfnd) {
      ans = min(ans, tpr);
      fnd = true;
    }
  }

  if (fnd) {
    cout << ans << '\n';
  } else {
    cout << "-1\n";
  }

  return 0;
}
