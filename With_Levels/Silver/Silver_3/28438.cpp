// problem: 행렬 연산 (행렬 계산하기)
// id: 28438
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

  int n, m, q, cq, r, l;
  cin >> n >> m >> q;
  vi a(n, 0), b(m, 0);
  while (q--) {
    cin >> cq >> r >> l;
    if (cq == 1) {
      a[r - 1] += l;
    } else {
      b[r - 1] += l;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a[i] + b[j] << (j != m - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
