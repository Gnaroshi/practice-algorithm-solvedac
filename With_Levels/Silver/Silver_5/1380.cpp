// problem: 귀걸이
// id: 1380
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

  for (int tcc = 1;; tcc++) {

    int n;
    cin >> n;
    if (n == 0) {
      break;
    }

    vs v;
    cin.ignore();
    for (int i = 0; i < n; i++) {
      string t;
      getline(cin, t);
      v.push_back(t);
    }

    int t, iter = 2 * n - 1;
    char c;
    vb a(n + 1, false), b(n + 1, false);
    for (int i = 0; i < iter; i++) {
      cin >> t >> c;
      if (c == 'A') {
        a[t] = true;
      } else {
        b[t] = true;
      }
    }

    for (int i = 1; i <= n; i++) {
      if ((a[i] && b[i]) == false) {
        cout << tcc << ' ' << v[i - 1] << '\n';
        break;
      }
    }
  }

  return 0;
}
