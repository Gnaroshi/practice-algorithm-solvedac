// problem: 아이폰 9S
// id: 5883
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

  int n, t, mx = 0;
  cin >> n;
  set<int> st;
  vi v;
  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
    st.insert(t);
  }

  for (auto cur : st) {
    int tmx = 0, cnt = 0, bef;
    for (int i = 0; i < n; i++) {
      if (v[i] == cur) {
        continue;
      }
      if (cnt == 0) {
        bef = v[i];
        cnt = 1;
        continue;
      } else {
        if (bef == v[i]) {
          cnt++;
        } else {
          tmx = max(tmx, cnt);
          cnt = 1;
        }
        bef = v[i];
      }
    }
    tmx = max(tmx, cnt);
    mx = max(tmx, mx);
  }

  cout << mx << '\n';

  return 0;
}
