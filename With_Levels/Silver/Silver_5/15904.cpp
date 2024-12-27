// problem: UCPC는 무엇의 약자일까?
// id: 15904
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
  int chk = 0;
  bool ans = false;
  for (auto &i : s) {
    if (chk == 0) {
      if (i == 'U') {
        chk++;
      }
    } else if (chk == 1) {
      if (i == 'C') {
        chk++;
      }
    } else if (chk == 2) {
      if (i == 'P') {
        chk++;
      }
    } else if (chk == 3) {
      if (i == 'C') {
        chk++;
        ans = true;
        break;
      }
    }
  }

  cout << "I " << (ans ? "love" : "hate") << " UCPC\n";

  return 0;
}
