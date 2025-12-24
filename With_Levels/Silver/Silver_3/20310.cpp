// problem: 타노스
// id: 20310
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

  string s, t;
  cin >> s;
  int cnt0 = 0, cnt1 = 0, iter = s.length();

  for (int i = 0; i < iter; i++) {
    if (s[i] == '0') {
      cnt0++;
    }
    if (s[i] == '1') {
      cnt1++;
    }
  }
  cnt0 /= 2;
  cnt1 /= 2;
  t = "";
  for (int i = 0; i < iter; i++) {
    if (cnt1 && s[i] == '1') {
      cnt1--;
    } else {
      t += s[i];
    }
  }

  s = t;
  t = "";
  iter = s.length();
  for (int i = iter - 1; i >= 0; i--) {
    if (cnt0 && s[i] == '0') {
      cnt0--;
    } else {
      t += s[i];
    }
  }
  reverse(t.begin(), t.end());

  cout << t << '\n';

  return 0;
}
