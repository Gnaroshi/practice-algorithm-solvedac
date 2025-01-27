// problem: 무한 문자열
// id: 12871
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

  int si, ti, sm, tm, l;
  string s, t, sf = "", tf = "";
  cin >> s >> t;
  if (s.length() < t.length()) {
    swap(s, t);
  }
  si = s.length(), ti = t.length();
  l = lcm(si, ti);
  sm = l / si, tm = l / ti;
  for (int i = 0; i < sm; i++)
    sf += s;
  for (int i = 0; i < tm; i++)
    tf += t;
  cout << (sf == tf) << '\n';

  return 0;
}
