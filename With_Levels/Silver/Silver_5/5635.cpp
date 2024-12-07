// problem: 생일
// id: 5635
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

int mth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int fn(int d, int m, int y) {
  int ret = 0;
  y -= 1990;
  ret += 365 * y;
  if (m != 1)
    ret += mth[m - 2];
  ret += d;

  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 1; i < 12; i++) {
    mth[i] += mth[i - 1];
  }

  int n, d, m, y, t;
  string s;
  vector<pair<int, string>> v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> d >> m >> y;
    v.push_back({fn(d, m, y), s});
  }

  sort(v.begin(), v.end());
  cout << v.back().second << "\n";
  cout << v.front().second << "\n";

  return 0;
}
