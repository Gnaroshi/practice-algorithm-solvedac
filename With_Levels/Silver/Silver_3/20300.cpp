// problem: 서강근육맨
// id: 20300
// tag:
// time taken:

#include <algorithm>
#include <climits>
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
  vll v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());
  ll mn = 0;
  ll t;
  int iter = n / 2;
  if (n % 2 == 1) {
    t = v.back();
    v.pop_back();
    mn = max(mn, t);
    n--;
  }

  for (int i = 0; i < iter; i++) {
    mn = max(mn, v[i] + v[n - i - 1]);
  }

  cout << mn << '\n';

  return 0;
}
