// problem: 행운의 수
// id: 9575
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

bool fn(int n) {
  string s = to_string(n);
  bool chk = true;
  for (auto i : s) {
    if (i == '5' || i == '8') {
      continue;
    } else {
      chk = false;
      break;
    }
  }

  return chk;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int al, bl, cl, t;
    set<int> st[3];
    map<int, bool> mp;
    cin >> al;
    for (int i = 0; i < al; i++) {
      cin >> t;
      st[0].insert(t);
    }
    cin >> bl;
    for (int i = 0; i < bl; i++) {
      cin >> t;
      st[1].insert(t);
    }
    cin >> cl;
    for (int i = 0; i < cl; i++) {
      cin >> t;
      st[2].insert(t);
    }

    for (auto i : st[0]) {
      for (auto j : st[1]) {
        for (auto k : st[2]) {
          t = i + j + k;
          if (fn(t)) {
            if (mp.find(t) == mp.end()) {
              mp[t] = true;
            }
          }
        }
      }
    }

    cout << mp.size() << '\n';
  }

  return 0;
}
