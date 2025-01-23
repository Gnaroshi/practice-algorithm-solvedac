// problem: 회문인 수
// id: 11068
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

bool fm(int b, int n) {
  string s = "";
  int t = n;
  while (t > 0) {
    char c = t % b;
    if (c < 10)
      c += '0';
    else
      c += 'a';
    s += c;
    t /= b;
  }
  bool ret = true;
  int iter = s.length(), hiter = iter / 2;
  for (int i = 0; i < hiter; i++) {
    if (s[i] != s[iter - i - 1]) {
      ret = false;
      break;
    }
  }
  return ret;
}

bool fn(int n) {
  for (int i = 2; i <= 64; i++) {
    if (fm(i, n)) {
      return true;
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    cout << fn(n) << '\n';
  }

  return 0;
}
