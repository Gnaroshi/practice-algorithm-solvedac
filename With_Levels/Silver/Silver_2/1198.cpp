// problem: 삼각형으로 자르기
// id: 1198
// tag:
// time taken:

#include <algorithm>
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
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

int n;
double ans = 0;
vector<pair<double, double>> v;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  v.resize(n);
  for (auto &i : v)
    cin >> i.first >> i.second;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      for (int k = 0; k < n; k++) {
        if (k == i || k == j)
          continue;
        ans = max(ans, abs(v[i].first * (v[j].second - v[k].second) +
                           v[j].first * (v[k].second - v[i].second) +
                           v[k].first * (v[i].second - v[j].second)) /
                           2);
      }
    }
  }

  cout << fixed;
  cout.precision(10);
  cout << ans << '\n';

  return 0;
}
