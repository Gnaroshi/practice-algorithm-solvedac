// problem: 팬그램
// id: 10384
// tag:
// time taken:

#include <algorithm>
#include <cctype>
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

  string op[4] = {"Not a ", "", "Double ", "Triple "};
  string ol[4] = {"", "!", "!!", "!!!"};

  int tc;
  cin >> tc;
  cin.ignore();
  for (int tcc = 1; tcc <= tc; tcc++) {
    int ans = 0;
    string s;
    getline(cin, s);
    vi cnt(26, 0);
    for (auto &i : s) {
      if (isalpha(i)) {
        cnt[tolower(i) - 'a']++;
      }
    }
    int mx = *min_element(cnt.begin(), cnt.end());
    cout << "Case " << tcc << ": ";
    cout << op[mx] << (mx == 1 ? "P" : "p") << "angram" << ol[mx] << '\n';
  }

  return 0;
}
