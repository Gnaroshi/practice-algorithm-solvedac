// problem: 파스칼의 삼각형
// id: 16395
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

  const int rg = 32;
  ll p[rg][rg] = {0};
  for (int i = 0; i < rg; i++) {
    p[i][0] = 1;
  }

  int n, k;
  cin >> n >> k;

  for (int i = 1; i < rg; i++) {
    for (int j = 1; j <= i; j++) {
      p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
    }
  }

  cout << p[n - 1][k - 1] << '\n';

  return 0;
}
