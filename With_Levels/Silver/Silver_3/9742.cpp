// problem: 순열
// id: 9742
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
  int n;
  vs v;
  while (cin >> s >> n) {
    int sl = s.length(), nf = 1;
    for (int i = 2; i <= sl; i++) {
      nf *= i;
    }
    if (n > nf) {
      cout << s << ' ' << n << " = No permutation\n";
      continue;
    }
    string t = s;
    for (int i = 0; i < n - 1; i++) {
      if (!next_permutation(s.begin(), s.end()))
        break;
    }
    cout << t << ' ' << n << " = " << s << '\n';
  }

  return 0;
}
