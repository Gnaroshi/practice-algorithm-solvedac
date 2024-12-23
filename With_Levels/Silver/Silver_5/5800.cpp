// problem: 성적 통계
// id: 5800
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
    cout << "Class " << tcc << "\n";
    int n, mx = 0;
    cin >> n;
    vi v(n);
    for (auto &i : v)
      cin >> i;
    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++) {
      mx = max(mx, v[i] - v[i - 1]);
    }
    cout << "Max " << v.back() << ", Min " << v.front() << ", Largest gap "
         << mx << "\n";
  }

  return 0;
}