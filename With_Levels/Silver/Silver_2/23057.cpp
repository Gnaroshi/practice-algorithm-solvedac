// problem: 도전 숫자왕
// id: 23057
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

int n, m, t;
vi v;
set<int> s;

void fn(int cnt, int sm) {

  s.insert(sm);
  if (cnt == n) {
    return;
  }
  fn(cnt + 1, sm + v[cnt]);
  fn(cnt + 1, sm);
  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
    m += t;
  }

  fn(0, 0);
  int ss = s.size();
  cout << m - ss + 1 << '\n';

  return 0;
}
