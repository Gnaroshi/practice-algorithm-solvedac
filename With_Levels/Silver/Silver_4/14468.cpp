// problem: 소가 길을 건너간 이유 2
// id: 14468
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

  string s;
  cin >> s;

  int ans = 0;

  for (int i = 0; i < 52; i++) {
    for (int j = i + 1; j < 52; j++) {
      if (s[i] == s[j]) {
        string t = s.substr(i, j - i + 1);
        vi tcnt(26, 0);
        for (auto k : t) {
          tcnt[k - 'A']++;
        }
        for (auto k : tcnt) {
          if (k == 1) {
            ans++;
          }
        }
      }
    }
  }

  cout << ans / 2 << "\n";

  return 0;
}
