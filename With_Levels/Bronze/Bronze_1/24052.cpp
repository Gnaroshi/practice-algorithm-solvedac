// problem: 알고리즘 수업 - 삽입 정렬 2
// id: 24052
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
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  int cnt = 0;

  for (int i = 1; i < n; i++) {
    int loc = i - 1;
    int t = a[i];
    bool tchk = false;

    while (0 <= loc && t < a[loc]) {
      a[loc + 1] = a[loc];
      cnt++;

      if (cnt == k) {
        tchk = true;
        break;
      }

      loc--;
    }

    if (tchk)
      break;

    if (loc + 1 != i) {
      a[loc + 1] = t;
      cnt++;

      if (cnt == k)
        break;
    }
  }

  if (cnt == k) {
    for (int i = 0; i < n; i++) {
      cout << a[i] << (i != n - 1 ? ' ' : '\n');
    }
  } else {
    cout << -1 << '\n';
  }

  return 0;
}
