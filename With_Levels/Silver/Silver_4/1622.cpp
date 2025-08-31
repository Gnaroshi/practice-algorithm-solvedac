// problem: 공통 순열
// id: 1622
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
  while (getline(cin, a) && getline(cin, b)) {
    vi ca(26, 0), cb(26, 0);
    for (auto i : a) {
      ca[i - 'a']++;
    }
    for (auto i : b) {
      cb[i - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
      int mn = min(ca[i], cb[i]);
      for (int j = 0; j < mn; j++) {
        cout << char(i + 'a');
      }
    }
    cout << '\n';
  }

  return 0;
}
