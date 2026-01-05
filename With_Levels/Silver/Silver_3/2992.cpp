// problem: 크면서 작은 수
// id: 2992
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

vs v;
vi cnt(10, 0);
int slen;
string s;

void fn(int cur, string scur) {
  if (cur == slen) {
    v.push_back(scur);
    return;
  }

  for (int i = 0; i < 10; i++) {
    if (cnt[i] != 0) {
      cnt[i]--;
      fn(cur + 1, scur + char(i + '0'));
      cnt[i]++;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> s;
  slen = s.length();
  for (auto i : s) {
    cnt[i - '0']++;
  }
  fn(0, "");
  sort(v.begin(), v.end());
  auto loc = find(v.begin(), v.end(), s);
  auto nxt = next(loc);
  if (nxt == v.end()) {
    cout << 0 << '\n';
  } else {
    cout << *nxt << '\n';
  }

  return 0;
}
