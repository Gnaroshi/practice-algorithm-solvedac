// problem: 다항함수의 미분
// id: 15725
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
  getline(cin, s);
  int iter = s.length(), loc = -1;
  for (int i = 0; i < iter; i++) {
    if (s[i] == 'x') {
      loc = i;
      break;
    }
  }

  if (loc < 0) {
    cout << 0 << '\n';
  } else if (loc == 0) {
    cout << 1 << '\n';
  } else {
    if (s[loc - 1] == '+') {
      cout << 1 << '\n';
    } else if (s[loc - 1] == '-') {
      cout << -1 << '\n';
    } else {
      cout << stoi((s.substr(0, loc))) << '\n';
    }
  }

  return 0;
}
