// problem: ALPS식 투표
// id: 2817
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

struct Stf {
  double v;
  char c;

  bool operator>(const Stf &t) const { return v > t.v; }
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, n;
  cin >> x >> n;
  vector<pair<char, int>> v;
  double th = x * 0.05;

  for (int i = 0; i < n; i++) {
    char c;
    int cnt;
    cin >> c >> cnt;
    if (cnt >= th) {
      v.push_back({c, cnt});
    }
  }

  sort(v.begin(), v.end());

  vector<Stf> all;
  map<char, int> chips;

  for (auto &i : v) {
    char c = i.first;
    int cnt = i.second;
    chips[c] = 0;
    for (int j = 1; j <= 14; j++) {
      all.push_back({(double)cnt / j, c});
    }
  }

  sort(all.begin(), all.end(), greater<Stf>());

  int iter = all.size();
  for (int i = 0; i < 14 && i < iter; i++) {
    chips[all[i].c]++;
  }

  for (auto &i : v) {
    cout << i.first << ' ' << chips[i.first] << '\n';
  }

  return 0;
}
