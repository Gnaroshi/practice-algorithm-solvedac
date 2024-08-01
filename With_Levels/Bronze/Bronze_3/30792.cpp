// problem: gahui and sousenkyo 2
// id: 30792
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

  int n, g;
  cin >> n >> g;
  vi ch(n - 1);
  for (auto &i : ch)
    cin >> i;
  ch.push_back(g);

  sort(ch.begin(), ch.end(), greater<>());
  int cur = 1;
  int cmx = ch.front();
  for (int i = 1; i < n; i++) {
    if (cmx == g) {
      break;
    }
    cur++;
    cmx = ch[i];
  }
  cout << cur << '\n';

  return 0;
}
