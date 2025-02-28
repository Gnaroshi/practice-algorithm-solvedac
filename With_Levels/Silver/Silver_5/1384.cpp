// problem: 메시지
// id: 1384
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

  int n;
  char c;
  for (int tcc = 1;; tcc++) {
    cin >> n;
    if (!n)
      break;

    vs nm(n);
    vpi ans;
    for (int i = 0; i < n; i++) {
      cin >> nm[i];
      for (int j = 1; j < n; j++) {
        cin >> c;
        if (c == 'N') {
          ans.push_back({(i - j + n) % n, i});
        }
      }
    }

    cout << "Group " << tcc << "\n";
    if (ans.empty()) {
      cout << "Nobody was nasty\n";
    } else {
      for (auto &i : ans) {
        cout << nm[i.first] << " was nasty about " << nm[i.second] << '\n';
      }
    }
    cout << "\n";
  }

  return 0;
}
