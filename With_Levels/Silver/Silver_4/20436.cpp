// problem: ZOAC 3
// id: 20436
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

  char sl, sr;
  string s;
  cin >> sl >> sr >> s;
  vpi aloc(26);
  vb hnd(26, false);
  string lft = "qwertasdfgzxcv";
  for (auto i : lft) {
    hnd[i - 'a'] = true;
  }
  vs qwerty(3);
  qwerty[0] = "qwertyuiop";
  qwerty[1] = "asdfghjkl";
  qwerty[2] = "zxcvbnm";
  for (int i = 0; i < 3; i++) {
    int l = qwerty[i].length();
    for (int j = 0; j < l; j++) {
      aloc[qwerty[i][j] - 'a'] = {i, j};
    }
  }

  int ans = 0;
  for (auto i : s) {
    if (hnd[i - 'a']) {
      ans += (abs(aloc[i - 'a'].first - aloc[sl - 'a'].first) +
              abs(aloc[i - 'a'].second - aloc[sl - 'a'].second));
      sl = i;
    } else {
      ans += (abs(aloc[i - 'a'].first - aloc[sr - 'a'].first) +
              abs(aloc[i - 'a'].second - aloc[sr - 'a'].second));
      sr = i;
    }
    ans++;
  }

  cout << ans << '\n';

  return 0;
}
