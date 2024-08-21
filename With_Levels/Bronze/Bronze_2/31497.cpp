// problem: 생일 축하합니다~
// id: 31497
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <ostream>
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

  int n;
  cin >> n;
  vector<string> v(n);
  vpi chk(n, {-1, -1});

  bool tmp;
  for (auto &i : v)
    cin >> i;

  for (int i = 0; i < n; i++) {
    cout << "? " << v[i] << endl;
    cin >> tmp;
    chk[i].first = tmp;
  }

  for (int i = 0; i < n; i++) {
    cout << "? " << v[i] << '\n' << flush;
    cin >> tmp;
    chk[i].second = tmp;
  }

  for (int i = 0; i < n; i++) {
    if (chk[i].first != chk[i].second) {
      for (int j = 0; j < n; j++) {
        if (i == j)
          continue;
        if (chk[j].first == chk[j].second && chk[j].first == 1) {
          cout << "! " << v[j] << '\n';
          return 0;
        }
      }
      cout << "! " << v[i] << "\n";
      return 0;
    }
  }

  return 0;
}
