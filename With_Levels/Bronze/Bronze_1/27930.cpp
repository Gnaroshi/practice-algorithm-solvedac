// problem: 당신은 운명을 믿나요?
// id: 27930
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

  string s, k = "KOREA", y = "YONSEI";
  cin >> s;
  int kc = 0, yc = 0, iter = s.length();
  int kl = k.length(), yl = y.length();
  for (int i = 0; i < iter; i++) {
    if (s[i] == k[kc]) {
      kc++;
    }
    if (s[i] == y[yc]) {
      yc++;
    }
    if (kc == kl) {
      cout << k << '\n';
      return 0;
    }
    if (yc == yl) {
      cout << y << '\n';
      return 0;
    }
  }

  return 0;
}
