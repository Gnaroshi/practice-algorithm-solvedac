// problem: 스텔라(STELLA)가 치킨을 선물했어요
// id: 15905
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

bool fn(pii a, pii b) {
  if (a.first == b.first)
    return a.second < b.second;
  return a.first > b.first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vpi v(n);
  for (auto &i : v) {
    cin >> i.first >> i.second;
  }

  sort(v.begin(), v.end(), fn);

  int ans = 0, cur = v[4].first;
  for (int i = 5; i < n; i++) {
    if (v[i].first == cur) {
      ans++;
    } else {
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}
