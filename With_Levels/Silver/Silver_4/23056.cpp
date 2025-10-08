// problem: 참가자 명단
// id:
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

bool cmp(pair<int, string> a, pair<int, string> b) {
  if (a.first == b.first) {
    if (a.second.length() == b.second.length()) {
      return (a.second < b.second);
    }
    return (a.second.length() < b.second.length());
  }
  return (a.first < b.first);
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, t;
  cin >> n >> m;
  vi cnt(n + 1, 0);
  vector<pair<int, string>> v, ansa, ansb;
  string s;
  while (true) {
    cin >> t >> s;
    if (t == 0) {
      break;
    }
    if (cnt[t] < m) {
      cnt[t]++;
      if (t % 2) {
        ansa.push_back({t, s});
      } else {
        ansb.push_back({t, s});
      }
    }
  }

  sort(ansa.begin(), ansa.end(), cmp);
  sort(ansb.begin(), ansb.end(), cmp);

  for (auto i : ansa) {
    cout << i.first << ' ' << i.second << '\n';
  }
  for (auto i : ansb) {
    cout << i.first << ' ' << i.second << '\n';
  }

  return 0;
}
