// problem: Text Roll
// id: 9494
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
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

  while (true) {
    int n;
    cin >> n;
    if (n == 0)
      break;
    cin.ignore();
    string s;
    vector<string> v;
    for (int i = 0; i < n; i++) {
      getline(cin, s);
      v.push_back(s);
    }
    int ans = 0;
    for (int i = 0; i < v[0].length(); i++) {
      if (v[0][i] != ' ') {
        ans = i;
        break;
      }
    }
    for (int i = 0; i < n; i++) {
      int iter = v[i].length();
      for (int j = ans; j < iter; j++) {
        if (v[i][j] == ' ') {
          ans = max(ans, j);
          break;
        } else if (j == iter - 1) {
          ans = max(ans, j + 1);
        }
      }
    }
    cout << ans + 1 << "\n";
  }

  return 0;
}
