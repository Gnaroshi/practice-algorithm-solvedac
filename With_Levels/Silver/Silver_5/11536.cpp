// problem: 줄 세우기
// id: 11536
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

  int n;
  cin >> n;
  vs a(n);
  bool chki = true, chkd = true;
  for (auto &i : a)
    cin >> i;

  for (int i = 1; i < n; i++) {
    if (a[i - 1] > a[i]) {
      chki = false;
    }
    if (a[i - 1] < a[i]) {
      chkd = false;
    }
  }

  if (chki == chkd)
    cout << "NEITHER\n";
  else if (chki)
    cout << "INCREASING\n";
  else
    cout << "DECREASING\n";

  return 0;
}
