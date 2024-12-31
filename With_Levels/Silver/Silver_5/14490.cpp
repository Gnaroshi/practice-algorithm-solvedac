// problem: 백대열
// id: 14490
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

  int n, m;
  string s;
  cin >> s;
  stringstream st;
  for (auto &i : s) {
    if (i == ':') {
      i = ' ';
      break;
    }
  }
  st.str(s);
  st >> n >> m;

  int iter = sqrt(max(n, m));
  vi p;
  vb isp(iter + 2, true);

  for (int i = 2; i <= iter; i++) {
    if (isp[i]) {
      p.push_back(i);
      for (auto j : p) {
        if (i * j > iter)
          break;
        isp[i * j] = false;
        if (i % j == 0)
          break;
      }
    }
  }

  for (auto i : p) {
    if (i > n || i > m)
      break;
    while (true) {
      if (n % i == 0 && m % i == 0) {
        n /= i;
        m /= i;
      } else
        break;
    }
  }

  cout << n << ':' << m << '\n';

  return 0;
}
