// problem: 숫자놀이
// id: 1755
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

  string sg[] = {
      "zero", "one", "two",   "three", "four",
      "five", "six", "seven", "eight", "nine",
  };

  int n, m;
  cin >> n >> m;
  vector<pair<string, int>> v;
  for (int i = n; i <= m; i++) {
    string t = "", s = to_string(i);
    int iter = s.length();

    for (int j = 0; j < iter; j++) {
      t += sg[s[j] - '0'];
      if (j != iter - 1) {
        t += " ";
      }
    }

    v.push_back({t, i});
  }

  sort(v.begin(), v.end());
  int iter = v.size();
  for (int i = 0; i < iter; i++) {
    cout << v[i].second << (i % 10 == 9 ? '\n' : ' ');
  }

  return 0;
}
