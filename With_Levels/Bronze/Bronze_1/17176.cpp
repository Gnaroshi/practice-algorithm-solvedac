// problem: 암호해독기
// id: 17176
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

  int n, t, bcnt = 0, tbcnt = 0;
  bool chk = true;
  vi v, a(55, 0), b(55, 0);

  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    a[t]++;
  }

  cin.ignore();
  getline(cin, s);
  for (auto i : s) {
    if (i == ' ')
      b[0]++;
    else if ('a' <= i && i <= 'z') {
      b[i - 'a' + 27]++;
    } else if ('A' <= i && i <= 'Z') {
      b[i - 'A' + 1]++;
    }
  }

  for (int i = 0; i < 55; i++) {
    if (a[i] != b[i]) {
      chk = false;
      break;
    }
  }

  cout << (chk ? 'y' : 'n') << '\n';

  return 0;
}
