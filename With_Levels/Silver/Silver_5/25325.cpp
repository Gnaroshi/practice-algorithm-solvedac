// problem: 학생 인기도 측정
// id: 25325
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

bool cmp(pair<string, int> a, pair<string, int> b) {
  if (a.second == b.second)
    return a.first < b.first;
  return a.second > b.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vs nm(n);
  vi cnt(n, 0);
  vector<pair<string, int>> ans;

  for (auto &i : nm) {
    cin >> i;
  }

  cin.ignore();
  string s, t;
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    stringstream st;
    st.str(s);
    while (st >> t) {
      for (int j = 0; j < n; j++) {
        if (t == nm[j]) {
          cnt[j]++;
          break;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    ans.push_back({nm[i], cnt[i]});
  }

  sort(ans.begin(), ans.end(), cmp);
  for (auto &i : ans) {
    cout << i.first << ' ' << i.second << '\n';
  }

  return 0;
}
