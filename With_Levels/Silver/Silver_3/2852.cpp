// problem: NBA 농구
// id: 2852
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

int fn(string s) {
  int ret = 0;
  ret += (s[0] - '0') * 10 + (s[1] - '0');
  ret *= 60;
  ret += (s[3] - '0') * 10 + (s[4] - '0');
  return ret;
}

string nf(int n) {
  string ret = "";
  int m = n / 60, s = n % 60;
  if (m < 10) {
    ret += "0";
  }
  ret += to_string(m);
  ret += ':';
  if (s < 10) {
    ret += "0";
  }
  ret += to_string(s);
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cur = 0, a = 0, b = 0, sa = 0, sb = 0, n, w;
  cin >> n;
  string s;

  for (int i = 0; i < n; i++) {
    cin >> w >> s;

    if (a > b) {
      sa += (fn(s) - cur);
    } else if (b > a) {
      sb += (fn(s) - cur);
    }
    cur = fn(s);

    if (w == 1) {
      a++;
    } else {
      b++;
    }
  }

  if (a > b) {
    sa += (48 * 60 - fn(s));
  } else if (b > a) {
    sb += (48 * 60 - fn(s));
  }

  cout << nf(sa) << "\n";
  cout << nf(sb) << "\n";

  return 0;
}
