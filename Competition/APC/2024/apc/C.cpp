// problem: C번 - APC2shake!
// id:
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
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

int n, ans, d, e;
string a, b, c;
vector<pair<int, string>> av;
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  while (n--) {
    cin >> a >> b >> c >> d >> e;
    if (b[0] == 'h')
      continue;
    if (c[0] == 'w')
      continue;
    if (1 <= d && d <= 3)
      continue;
    av.push_back({e, a});
  }
  sort(av.begin(), av.end());

  int avs = av.size();
  int mn = min(10, avs);
  cout << mn << '\n';
  vector<string> ansn;
  for (int i = 0; i < mn; i++) {
    ansn.push_back(av[i].second);
  }
  sort(ansn.begin(), ansn.end());
  for (auto i : ansn)
    cout << i << '\n';

  return 0;
}
