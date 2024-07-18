// problem: 알파벳 뒤집기
// id: 30032
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

  int n, d;
  cin >> n >> d;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (d == 1) {
      for (auto &j : s) {
        if (j == 'd')
          cout << 'q';
        else if (j == 'b')
          cout << 'p';
        else if (j == 'p')
          cout << 'b';
        else if (j == 'q')
          cout << 'd';
      }
    } else {
      for (auto &j : s) {
        if (j == 'd')
          cout << 'b';
        else if (j == 'b')
          cout << 'd';
        else if (j == 'p')
          cout << 'q';
        else if (j == 'q')
          cout << 'p';
      }
    }
    cout << '\n';
  }

  return 0;
}
