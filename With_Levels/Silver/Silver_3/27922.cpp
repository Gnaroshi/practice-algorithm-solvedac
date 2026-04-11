// problem: 현대모비스 입사 프로젝트
// id: 27922
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <functional>
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

  int n, k, a, b, c;
  cin >> n >> k;
  vi ab, bc, ca;
  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    ab.push_back(a + b);
    bc.push_back(b + c);
    ca.push_back(c + a);
  }

  sort(ab.begin(), ab.end(), greater<>());
  sort(bc.begin(), bc.end(), greater<>());
  sort(ca.begin(), ca.end(), greater<>());

  ll sab, sbc, sca;
  sab = sbc = sca = 0;

  for (int i = 0; i < k; i++) {
    sab += ab[i];
    sbc += bc[i];
    sca += ca[i];
  }

  cout << max({sab, sbc, sca}) << '\n';

  return 0;
}
