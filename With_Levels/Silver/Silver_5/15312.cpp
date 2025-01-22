// problem: 이름 궁합
// id: 15312
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

int aw[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2,
              2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b, s = "", t = "";
  cin >> a >> b;
  int iter = a.length();
  for (int i = 0; i < iter; i++) {
    s += char(aw[a[i] - 'A'] + '0');
    s += char(aw[b[i] - 'A'] + '0');
  }

  iter *= 2;
  while (true) {
    t = "";
    for (int i = 1; i < iter; i++) {
      t += char(((s[i - 1] - '0') + (s[i] - '0')) % 10 + '0');
    }
    iter--;
    if (iter == 2) {
      cout << t << '\n';
      break;
    }
    s = t;
  }

  return 0;
}
