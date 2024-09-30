// problem: 2022년이 아름다웠던 이유
// id: 27065
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

  const int MX = 5001;
  vb isp(MX + 1, 1), chk(MX + 1, 1);
  vi ps(MX + 1, 1);
  ps[0] = 0;
  for (int i = 2; i < MX; i++) {
    for (int j = 2; j < MX; j++) {
      if (i * j >= MX)
        break;
      ps[i * j] += i;
    }
  }

  for (int i = 2; i < MX; i++) {
    if (ps[i] > i)
      chk[i] = 0;
  }

  int tc;
  cin >> tc;
  while (tc--) {
    int n, sum = 0;
    bool tchk = true;
    cin >> n;
    vi cp;

    if (!chk[n]) {
      for (int i = 2; i < n; i++) {
        if (n % i == 0) {
          if (chk[i] == 0) {
            tchk = false;
            break;
          }
        }
      }
    } else
      tchk = false;

    cout << (tchk ? "Good Bye\n" : "BOJ 2022\n");
  }

  return 0;
}
