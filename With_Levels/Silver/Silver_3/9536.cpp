// problem: 여우는 어떻게 울지?
// id: 9536
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
    string s, t, a, b, c;
    getline(cin, s);
    stringstream st;
    st.str(s);
    vs v;
    while (st >> t) {
      v.push_back(t);
    }
    while (true) {
      getline(cin, s);
      if (s.back() == '?') {
        break;
      }
      stringstream cur;
      cur.str(s);
      cur >> a >> b >> c;
      while (true) {
        auto it = find(v.begin(), v.end(), c);
        if (it != v.end()) {
          v.erase(it);
        } else {
          break;
        }
      }
    }

    int iter = v.size();
    for (int i = 0; i < iter; i++) {
      cout << v[i] << (i != iter - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
