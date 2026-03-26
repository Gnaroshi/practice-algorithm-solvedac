// problem: 디지털 친구
// id: 1985
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

int fn(string s) {
  int ret = 0;
  for (auto i : s) {
    ret |= (1 << (i - '0'));
  }
  return ret;
}

bool fn2(string a, string b) {
  int ma = fn(a);
  int bl = b.length();
  int cur, nxt;
  bl--;
  for (int i = 0; i < bl; i++) {
    cur = b[i] - '0';
    nxt = b[i + 1] - '0';
    if (cur > 0 && nxt < 9) {
      if (!(i == 0 && cur == 1)) {
        string t = b;
        t[i]--;
        t[i + 1]++;
        if (fn(t) == ma) {
          return true;
        }
      }
    }

    if (cur < 9 && nxt > 0) {
      string t = b;
      t[i]++;
      t[i + 1]--;
      if (fn(t) == ma) {
        return true;
      }
    }
  }

  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc = 3;
  string a, b;
  while (tc--) {
    cin >> a >> b;
    int ma = fn(a);
    int mb = fn(b);

    if (ma == mb) {
      cout << "friends\n";
      continue;
    }

    cout << ((fn2(a, b) || fn2(b, a)) ? "almost friends" : "nothing") << "\n";
  }

  return 0;
}
