// problem: 알고리즘 수업 - 선택 정렬 1
// id: 23881
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
  for (auto &i : a)
    cin >> i;

  for (int i = n - 1; i > 0; i--) {
    auto mxl = max_element(a.begin(), a.begin() + i + 1);
    if (a[i] != *mxl) {
      int t = a[i];
      a[i] = *mxl;
      *mxl = t;
      k--;
      if (k == 0) {
        cout << *mxl << " " << a[i] << "\n";
        return 0;
      }
    }
  }
  cout << -1 << '\n';

  return 0;
}
