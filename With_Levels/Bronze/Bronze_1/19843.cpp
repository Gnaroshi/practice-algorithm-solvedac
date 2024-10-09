// problem: 수면 패턴
// id: 19843
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

string wd[5] = {"Mon", "Tue", "Wed", "Thu", "Fri"};

int wdi(string s) {
  for (int i = 0; i < 5; i++) {
    if (s == wd[i])
      return i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tot, n, cur = 0;
  cin >> tot >> n;

  string da, db;
  int ha, hb, dai, dbi;

  for (int i = 0; i < n; i++) {
    cin >> da >> ha >> db >> hb;
    int tcur = 0;
    dai = wdi(da);
    dbi = wdi(db);

    if (dai == dbi) {
      tcur += hb - ha;
    } else {
      tcur += 24 * (max(0, dbi - dai - 1));
      tcur += (24 - ha);
      tcur += hb;
    }
    cur += tcur;
    // cout << "tcur: " << tcur << '\n';
  }

  // cout << "cur: " << cur << '\n';

  if (cur >= tot)
    cout << 0;
  else {
    tot -= cur;
    if (tot <= 48)
      cout << tot;
    else
      cout << -1;
  }
  cout << '\n';

  return 0;
}
