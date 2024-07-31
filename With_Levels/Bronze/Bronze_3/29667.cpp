// problem: Ответный матч
// id: 29667
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

  int a1, b1, a2, b2;
  string s;
  cin >> s;
  a1 = s[0] - '0';
  b1 = s[2] - '0';
  cin >> s;
  a2 = s[2] - '0';
  b2 = s[0] - '0';

  if (a1 < b2 || b1 < a2)
    cout << "NO\n";
  else
    cout << "YES\n";

  return 0;
}
