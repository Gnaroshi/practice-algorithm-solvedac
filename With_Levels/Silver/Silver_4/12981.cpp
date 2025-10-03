// problem: 공 포장하기
// id: 12981
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

  int ans = 0;
  vi v(3);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < 3; i++) {
    ans += v[i] / 3;
    v[i] %= 3;
  }

  while (v[0] && v[1] && v[2]) {
    ans++;
    v[0]--;
    v[1]--;
    v[2]--;
  }
  while (v[0] && v[1]) {
    ans++;
    v[0]--;
    v[1]--;
  }
  while (v[1] && v[2]) {
    ans++;
    v[1]--;
    v[2]--;
  }
  while (v[0] && v[2]) {
    ans++;
    v[0]--;
    v[2]--;
  }
  if (v[0]) {
    ans++;
  }
  if (v[1]) {
    ans++;
  }
  if (v[2]) {
    ans++;
  }

  cout << ans << "\n";

  return 0;
}
