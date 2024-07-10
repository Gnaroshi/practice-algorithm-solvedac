// problem: 아이그루스와 화장실
// id: 30642
// tag:
// time taken:

#include <algorithm>
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

  int n, k;
  string s;
  cin >> n >> s >> k;

  if (s[0] == 'a') {
    if (k % 2 == 1)
      cout << k << "\n";
    else {
      if (k - 1 > 0)
        cout << k - 1 << '\n';
      else
        cout << k + 1 << '\n';
    }
  } else {
    if (k % 2 == 0)
      cout << k << "\n";
    else {
      if (k - 1 > 1)
        cout << k - 1 << '\n';
      else
        cout << k + 1 << '\n';
    }
  }

  return 0;
}
