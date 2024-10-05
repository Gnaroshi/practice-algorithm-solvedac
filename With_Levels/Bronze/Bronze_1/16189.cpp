// problem: Repetitive Palindrome
// id: 16189
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

  string s;
  ll k;
  cin >> s >> k;
  bool chk = true;
  int iter = s.length(), hiter = iter / 2;

  for (int i = 0; i < hiter; i++) {
    if (s[i] != s[iter - i - 1]) {
      chk = false;
      break;
    }
  }

  cout << (chk ? "YES\n" : "NO\n");

  return 0;
}
