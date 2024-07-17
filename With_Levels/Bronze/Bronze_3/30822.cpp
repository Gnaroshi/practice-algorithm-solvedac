// problem: UOSPC 세기
// id: 30822
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

  int n;
  string s;
  int cnt[5] = {0};
  cin >> n >> s;
  for (auto &i : s) {
    if (i == 'u')
      cnt[0]++;
    else if (i == 'o')
      cnt[1]++;
    else if (i == 's')
      cnt[2]++;
    else if (i == 'p')
      cnt[3]++;
    else if (i == 'c')
      cnt[4]++;
  }

  cout << *min_element(cnt, cnt + 5) << '\n';
  return 0;
}
