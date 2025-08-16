// problem: I AM IRONMAN
// id: 17264
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

  int n, p, w, l, g, cur = 0;
  cin >> n >> p >> w >> l >> g;
  char c;
  string s;
  map<string, char> mp;
  bool chk = false;
  for (int i = 0; i < p; i++) {
    cin >> s >> c;
    mp[s] = c;
  }
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (mp.find(s) != mp.end()) {
      if (mp[s] == 'W') {
        cur += w;
      } else {
        cur -= l;
        cur = max(0, cur);
      }
    } else {
      cur -= l;
      cur = max(0, cur);
    }

    if (cur >= g) {
      chk = true;
    }
  }

  if (chk) {
    cout << "I AM NOT IRONMAN!!\n";
  } else {
    cout << "I AM IRONMAN!!\n";
  }

  return 0;
}
