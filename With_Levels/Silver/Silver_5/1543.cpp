// problem: 문서 검색
// id: 1543
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

  string a, b;
  getline(cin, a);
  getline(cin, b);

  int ans = 0, al = a.length(), bl = b.length();
  for (int i = 0; i < al; i++) {
    bool t = true;
    for (int j = 0; j < bl; j++) {
      if (a[i + j] != b[j]) {
        t = false;
        break;
      }
    }
    if (t) {
      ans++;
      i += bl - 1;
    }
  }

  cout << ans << '\n';

  return 0;
}
