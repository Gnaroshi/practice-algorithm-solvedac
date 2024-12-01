// problem: 점수 계산
// id: 2822
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

  int ans = 0;
  vpi v(8, {0, 0});
  vi od;

  for (int i = 0; i < 8; i++) {
    cin >> v[i].first;
    v[i].second = i + 1;
  }

  sort(v.begin(), v.end(), greater<>());

  for (int i = 0; i < 5; i++) {
    ans += v[i].first;
    od.push_back(v[i].second);
  }

  sort(od.begin(), od.end());

  cout << ans << '\n';
  for (int i = 0; i < 5; i++) {
    cout << od[i] << (i != 4 ? ' ' : '\n');
  }

  return 0;
}
