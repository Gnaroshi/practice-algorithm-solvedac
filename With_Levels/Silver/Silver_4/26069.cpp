// problem: 붙임성 좋은 총총이
// id: 26069
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

  int n;
  cin >> n;
  string a, b;
  map<string, bool> mp;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (a == "ChongChong") {
      mp[a] = true;
    } else if (b == "ChongChong") {
      mp[b] = true;
    }
    if (mp.find(a) != mp.end()) {
      mp[b] = true;
    } else if (mp.find(b) != mp.end()) {
      mp[a] = true;
    }
  }

  cout << mp.size() << '\n';

  return 0;
}
