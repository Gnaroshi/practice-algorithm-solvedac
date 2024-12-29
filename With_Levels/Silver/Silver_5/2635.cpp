// problem: 수 이어가기
// id: 2635
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

  int n, mx = 0, t;
  cin >> n;
  if (n == 1) {
    cout << "4\n1 1 0 1\n";
    return 0;
  }
  vi ans;

  for (int i = 1; i < n; i++) {
    int tn = n, d;
    t = i;
    vi s;
    s.push_back(n);
    while (true) {
      d = tn - t;
      if (d < 0) {
        if (t >= 0)
          s.push_back(t);
        break;
      }
      s.push_back(t);
      tn = t;
      t = d;
    }

    if (s.size() > mx) {
      mx = s.size();
      ans = s;
    }
  }

  cout << mx << "\n";
  for (auto i : ans) {
    cout << i << ' ';
  }
  cout << "\n";

  return 0;
}
