// problem: UDPC 파티
// id: 27919
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
  int cu = 0, cd = 0, cp = 0;
  for (auto i : s) {
    if (i == 'U' || i == 'C') {
      cu++;
    }
    if (i == 'D') {
      cd++;
    }
    if (i == 'P') {
      cp++;
    }
  }

  if ((cd + cp) / 2 + (cd + cp) % 2 < cu) {
    cout << "U";
  }
  if (cd + cp != 0) {
    cout << "DP";
  }

  cout << "\n";

  return 0;
}
