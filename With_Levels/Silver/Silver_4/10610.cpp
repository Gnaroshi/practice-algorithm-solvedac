// problem: 30
// id: 10610
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
  int cnt[10] = {0}, div3 = 0;

  for (auto i : s) {
    cnt[i - '0']++;
    div3 += (i - '0');
  }
  div3 %= 3;

  if (cnt[0] == 0 || div3 != 0) {
    cout << -1 << '\n';
  } else {
    for (int i = 9; i >= 0; i--) {
      for (int j = cnt[i]; j > 0; j--) {
        cout << i;
      }
    }
    cout << '\n';
  }

  return 0;
}
