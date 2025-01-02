// problem: 줄세우기
// id: 10431
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

  int tc;
  cin >> tc;
  for (int tcc = 1; tcc <= tc; tcc++) {
    int ans = 0, t, tca, mx;
    vi v(20);
    cin >> tca;
    for (auto &i : v)
      cin >> i;
    for (int i = 0; i < 19; i++) {
      for (int j = i + 1; j < 20; j++) {
        if (v[i] > v[j]) {
          swap(v[i], v[j]);
          ans++;
        }
      }
    }

    cout << tcc << ' ' << ans << '\n';
  }

  return 0;
}
