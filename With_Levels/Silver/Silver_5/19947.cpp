// problem: 투자의 귀재 배추형
// id: 19947
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

int h, y, mx;

void fn(int h, int cur) {
  if (cur + 1 <= y) {
    fn(int(double(h) * 1.05), cur + 1);
  }
  if (cur + 3 <= y) {
    fn(int(double(h) * 1.20), cur + 3);
  }
  if (cur + 5 <= y) {
    fn(int(double(h) * 1.35), cur + 5);
  }
  mx = max(mx, h);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> h >> y;

  fn(h, 0);
  cout << mx << '\n';

  return 0;
}
