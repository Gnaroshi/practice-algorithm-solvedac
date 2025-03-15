// problem: 중간고사 채점
// id: 15702
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

bool cmp(pii a, pii b) {
  if (a.second == b.second) {
    return a.first < b.first;
  }
  return a.second > b.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> m >> n;
  vpi v(n);
  vi sc(m);
  for (auto &i : sc) {
    cin >> i;
  }

  int t;
  char c;
  for (auto &i : v) {
    t = 0;
    cin >> i.first;
    for (int j = 0; j < m; j++) {
      cin >> c;
      if (c == 'O') {
        t += sc[j];
      }
    }

    i.second = t;
  }

  sort(v.begin(), v.end(), cmp);

  cout << v[0].first << ' ' << v[0].second << '\n';

  return 0;
}
