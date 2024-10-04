// problem: 재우야 임관하자
// id: 28682
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <ostream>
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
  cin >> n;
  for (int i = 0; i < n; i++)
    cout << "swimming" << (i != n - 1 ? ' ' : '\n');

  cout << flush;

  string s;
  vector<string> vs;
  for (int i = 0; i < n; i++) {
    cin >> s;
    vs.push_back(s);
  }

  for (int i = 0; i < n; i++) {
    if (vs[i] == "soccer")
      cout << "bowling" << (i != n - 1 ? ' ' : '\n');
    else
      cout << "soccer" << (i != n - 1 ? ' ' : '\n');
  }

  return 0;
}
