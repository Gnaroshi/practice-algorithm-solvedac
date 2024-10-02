// problem: 3개만!
// id: 17288
// tag:
// time taken:

#include <algorithm>
#include <cmath>
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
using ll = long long;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
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
  int iter = s.length(), ans = 0;
  for (int i = 0; i < iter; i++) {
    string t = "";
    t += s[i];

    for (int j = i + 1; j < iter; j++) {
      if (s[j] - t.back() == 1) {
        t += s[j];
      } else
        break;
      // cout << t.back() << " --------back\n";
    }

    // cout << t << '\n';

    if (t.length() == 3) {
      ans++;
      i += 2;
    } else if (t.length() > 3) {
      i += t.length() - 1;
    }
  }

  cout << ans << '\n';

  return 0;
}
