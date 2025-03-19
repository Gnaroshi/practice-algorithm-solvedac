// problem: 증가 배열 만들기
// id: 27648
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

  int n, m, k;
  cin >> n >> m >> k;
  if (k < n + m - 1) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    vvi v(n, vi(m, 1));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        v[i][j] += i + j;
        cout << v[i][j] << (j != m - 1 ? ' ' : '\n');
      }
    }
  }

  return 0;
}
