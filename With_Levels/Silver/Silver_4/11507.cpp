// problem: 카드셋트
// id: 11507
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

  string s;
  cin >> s;
  vvi v(4, vi(14, 1));
  int iter = s.length();
  for (int i = 0; i < iter; i += 3) {
    int m;
    int n = int((s[i + 1] - '0') * 10) + int(s[i + 2] - '0');
    if (s[i] == 'P') {
      m = 0;
    } else if (s[i] == 'K') {
      m = 1;
    } else if (s[i] == 'H') {
      m = 2;
    } else if (s[i] == 'T') {
      m = 3;
    }

    if (v[m][n] == 0) {
      cout << "GRESKA\n";
      return 0;
    }
    v[m][n] = 0;
  }

  int cnt;
  for (int i = 0; i < 4; i++) {
    cnt = 0;
    for (int j = 1; j < 14; j++) {
      cnt += v[i][j];
    }
    cout << cnt << (i != 3 ? ' ' : '\n');
  }

  return 0;
}
