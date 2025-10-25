// problem: 영단어 암기는 괴로워
// id: 20920
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

  int n, m;
  cin >> n >> m;
  map<string, int> mp;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s.length() < m) {
      continue;
    }
    if (mp.find(s) == mp.end()) {
      mp[s] = 1;
    } else {
      mp[s]++;
    }
  }

  vector<pair<string, int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
    if (a.second != b.second) {
      return a.second > b.second;
    }
    if (a.first.length() != b.first.length()) {
      return a.first.length() > b.first.length();
    }
    return a.first < b.first;
  });

  for (auto &[t, i] : v) {
    cout << t << "\n";
  }

  return 0;
}
