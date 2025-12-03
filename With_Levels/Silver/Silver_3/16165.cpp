// problem: 걸그룹 마스터 준석이
// id: 16165
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

  int n, m, mn;
  cin >> n >> m;
  map<string, vs> mton;
  map<string, string> ntom;
  string s, t;

  for (int i = 0; i < n; i++) {
    cin >> s >> mn;
    for (int j = 0; j < mn; j++) {
      cin >> t;
      ntom[t] = s;
      mton[s].push_back(t);
    }
    sort(mton[s].begin(), mton[s].end());
  }

  for (int i = 0; i < m; i++) {
    cin >> s >> mn;
    if (mn == 1) {
      cout << ntom[s] << '\n';
    } else {
      for (auto j : mton[s]) {
        cout << j << '\n';
      }
    }
  }

  return 0;
}
