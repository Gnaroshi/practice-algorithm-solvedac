/// problem: 수강신청
// id: 13414
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

  int k, l, cur = 0;
  string s;
  cin >> k >> l;
  map<string, int> mp;

  for (int i = 0; i < l; i++) {
    cin >> s;
    if (mp.find(s) != mp.end()) {
      mp.erase(s);
    }
    mp[s] = cur++;
  }

  vector<pair<string, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(),
       [](const auto &a, const auto &b) { return a.second < b.second; });

  int iter = min(k, int(v.size()));
  for (int i = 0; i < iter; i++) {
    cout << v[i].first << '\n';
  }

  return 0;
}
/ problem : 수강신청
// id: 13414
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

  int k, l, cur = 0;
  string s;
  cin >> k >> l;
  map<string, int> mp;

  for (int i = 0; i < l; i++) {
    cin >> s;
    if (mp.find(s) != mp.end()) {
      mp.erase(s);
    }
    mp[s] = cur++;
  }

  vector<pair<string, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(),
       [](const auto &a, const auto &b) { return a.second < b.second; });

  int iter = min(k, int(v.size()));
  for (int i = 0; i < iter; i++) {
    cout << v[i].first << '\n';
  }

  return 0;
}
