// problem: 단어 나누기
// id: 1251
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
  int sl = s.length();
  vs v;

  for (int i = 0; i < sl - 2; i++) {
    for (int j = i + 1; j < sl - 1; j++) {
      string a = s.substr(0, i + 1);
      string b = s.substr(i + 1, j - i);
      string c = s.substr(j + 1);

      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());
      reverse(c.begin(), c.end());

      v.push_back(a + b + c);
    }
  }

  sort(v.begin(), v.end());
  cout << v.front() << '\n';

  return 0;
}
