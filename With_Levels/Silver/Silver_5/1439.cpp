// problem: 뒤집기
// id: 1439
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

  int iter = s.length();
  int a = 0, b = 0;
  char cc = s.front();
  if (cc == '0')
    a++;
  else
    b++;

  for (int i = 1; i < iter; i++) {
    if (s[i] != cc) {
      if (s[i] == '0')
        a++;
      else
        b++;
    }
    cc = s[i];
  }

  cout << min(a, b) << '\n';

  return 0;
}
