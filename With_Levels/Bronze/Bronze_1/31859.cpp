// problem: SMUPC NAME
// id: 31859
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

  int n, cnt = 0;
  string s, t = "";
  cin >> n >> s;
  int chk[26] = {0};
  for (auto i : s) {
    chk[i - 'a']++;
    if (chk[i - 'a'] == 1) {
      t += i;
    } else
      cnt++;
  }

  t += to_string(cnt + 4);

  t = to_string(n + 1906) + t;
  reverse(t.begin(), t.end());

  cout << "smupc_" << t << '\n';

  return 0;
}
