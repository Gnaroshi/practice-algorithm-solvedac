// problem: 동일한 단어 그룹화하기
// id: 16499
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

  int n;
  cin >> n;
  string s;
  set<string> gs;
  for (int i = 0; i < n; i++) {
    cin >> s;
    vi cnt(26, 0);
    for (auto j : s) {
      cnt[j - 'a']++;
    }
    string t = "";
    for (int j = 0; j < 26; j++) {
      t += char(cnt[j] + '0');
    }
    gs.insert(t);
  }

  cout << gs.size() << '\n';

  return 0;
}
