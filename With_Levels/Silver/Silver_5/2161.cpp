// problem: 카드1
// id: 2161
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <deque>
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

  int n;
  cin >> n;
  deque<int> d;
  for (int i = 1; i <= n; i++) {
    d.push_back(i);
  }

  for (int i = 0; i < n; i++) {
    int t = d.front();
    cout << t << (i != n - 1 ? ' ' : '\n');
    d.pop_front();
    t = d.front();
    d.pop_front();
    d.push_back(t);
  }

  return 0;
}
