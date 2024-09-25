// problem: 전주 듣고 노래 맞히기
// id: 31562
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using vs = vector<string>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, t;
  cin >> n >> m;
  string s, nt;
  char c;
  vs sn, snt;

  for (int i = 0; i < n; i++) {
    cin >> t >> s;
    nt = "";
    for (int j = 0; j < 7; j++) {
      cin >> c;
      nt += c;
    }
    sn.push_back(s);
    snt.push_back(nt.substr(0, 3));
  }

  // for (auto i : snt) {
  //   cout << "--------" << i << '\n';
  // }
  // cout << '\n';

  while (m--) {
    nt = "";
    for (int i = 0; i < 3; i++) {
      cin >> c;
      nt += c;
    }
    int cnt = 0, loc = -1;
    for (int i = 0; i < n; i++) {
      if (snt[i] == nt) {
        cnt++;
        loc = i;
      }
    }
    if (cnt == 0) {
      cout << "!\n";
    } else if (cnt == 1) {
      cout << sn[loc] << '\n';
    } else
      cout << "?\n";
  }

  return 0;
}
