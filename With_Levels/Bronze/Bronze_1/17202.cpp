// problem: 핸드폰 번호 궁합
// id: 17202
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

  string a, b, s = "";
  cin >> a >> b;

  for (int i = 0; i < 8; i++) {
    s += a[i];
    s += b[i];
  }

  for (int i = 0; i < 14; i++) {
    string t = "";
    int c;
    for (int j = 0; j < s.length() - 1; j++) {
      c = (s[j] - '0') + (s[j + 1] - '0');
      c %= 10;
      t += char('0' + c);
    }
    s = t;
  }

  cout << s << '\n';

  return 0;
}
