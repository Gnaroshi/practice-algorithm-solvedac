// problem: 알록달록 앵무새
// id: 28445
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

  map<pair<string, string>, int> mp;

  vs a(4), b(4);
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  copy(a.begin(), a.end(), b.begin());

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      pair<string, string> t = {a[i], b[j]};
      mp[t]++;
    }
  }

  for (auto i : mp) {
    cout << i.first.first << ' ' << i.first.second << '\n';
  }

  return 0;
}
