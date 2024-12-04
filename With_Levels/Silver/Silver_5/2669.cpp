// problem: 직사각형 네개의 합집합의 면적 구하기
// id: 2669
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

  int v[101][101] = {0};

  int a, b, c, d;
  for (int i = 0; i < 4; i++) {
    cin >> a >> b >> c >> d;
    for (int j = a; j < c; j++) {
      for (int k = b; k < d; k++) {
        v[j][k] = 1;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      ans += v[i][j];
    }
  }

  cout << ans << '\n';

  return 0;
}
