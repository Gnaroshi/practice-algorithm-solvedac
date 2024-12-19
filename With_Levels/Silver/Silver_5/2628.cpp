// problem: 종이 자르기
// id: 2628
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

  int n, m, d, w, t;
  cin >> n >> m >> d;
  vi ri, ci;
  ri.push_back(0), ri.push_back(m);
  ci.push_back(0), ci.push_back(n);

  while (d--) {
    cin >> w >> t;
    if (w == 0)
      ri.push_back(t);
    else
      ci.push_back(t);
  }

  sort(ri.begin(), ri.end());
  sort(ci.begin(), ci.end());

  int rmx = 0, cmx = 0;
  int riter = ri.size(), citer = ci.size();

  for (int i = 1; i < riter; i++) {
    rmx = max(rmx, ri[i] - ri[i - 1]);
  }

  for (int i = 1; i < citer; i++) {
    cmx = max(cmx, ci[i] - ci[i - 1]);
  }

  cout << rmx * cmx << "\n";

  return 0;
}
