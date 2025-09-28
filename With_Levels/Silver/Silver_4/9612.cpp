// problem: Maximum Word Frequency
// id: 9612
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
  string s;
  map<string, int> mp;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s;
    if (mp.find(s) != mp.end()) {
      mp[s]++;
    } else {
      mp[s] = 1;
    }
  }
  vector<pair<string, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(),
       [](const pair<string, int> &a, const pair<string, int> &b) {
         if (a.second == b.second) {
           return a.first > b.first;
         }
         return a.second > b.second;
       });

  cout << v.front().first << ' ' << v.front().second << '\n';

  return 0;
}
