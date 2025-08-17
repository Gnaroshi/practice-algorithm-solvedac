// problem: 수열의 합
// id: 5623
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
  vvi v(n, vi(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }

  if (n == 2) {
    cout << "1 1\n";
  } else {
    vi ans;
    ans.push_back((v[0][1] + v[1][2] + v[0][2]) / 2 - v[1][2]);
    for (int i = 1; i < n; i++) {
      ans.push_back(v[i - 1][i] - ans[i - 1]);
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << (i != n - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
