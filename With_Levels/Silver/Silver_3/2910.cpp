// problem: 빈도 정렬
// id: 2910
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

  int n, c, t;
  cin >> n >> c;

  vi ord;
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (mp.find(t) == mp.end()) {
      ord.push_back(t);
    }
    mp[t]++;
  }

  vpi v;

  for (auto i : ord) {
    if (mp.find(i) != mp.end()) {
      v.push_back({i, mp[i]});
      mp.erase(i);
    }
  }

  stable_sort(v.begin(), v.end(),
              [](const pair<int, int> &a, const pair<int, int> &b) {
                if (a.second == b.second) {
                  return false;
                }
                return a.second > b.second;
              });

  for (auto &i : v) {
    int iter = i.second;
    for (int j = 0; j < iter; j++) {
      cout << i.first << ' ';
    }
  }
  cout << '\n';

  return 0;
}
