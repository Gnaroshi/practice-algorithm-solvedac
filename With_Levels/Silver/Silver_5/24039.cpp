// problem: 2021은 무엇이 특별할까?
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vb isp(110, true);
  vi p;
  for (int i = 2; i < 110; i++) {
    if (isp[i]) {
      p.push_back(i);
    }
    for (auto j : p) {
      if (i * j >= 110)
        break;
      isp[i * j] = false;
      if (i % j == 0)
        break;
    }
  }
  int ps = p.size();
  for (int i = 1; i < ps; i++) {
    if (p[i - 1] * p[i] > n) {
      cout << p[i - 1] * p[i] << '\n';
      break;
    }
  }

  return 0;
}
