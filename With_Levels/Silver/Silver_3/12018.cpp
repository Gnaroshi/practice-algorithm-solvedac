// problem: Yonsei TOTO
// id: 12018
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, cnt = 0, p, l, t;
  cin >> n >> m;
  vi mns;
  for (int i = 0; i < n; i++) {
    cin >> p >> l;
    vi tmp(p);
    for (int j = 0; j < p; j++) {
      cin >> tmp[j];
    }
    if (l > p) {
      mns.push_back(1);
    } else {
      sort(tmp.begin(), tmp.end(), greater<>());
      mns.push_back(tmp[l - 1]);
    }
  }

  sort(mns.begin(), mns.end());
  for (auto i : mns) {
    if (m >= i) {
      cnt++;
      m -= i;
    } else {
      break;
    }
  }

  cout << cnt << "\n";

  return 0;
}
