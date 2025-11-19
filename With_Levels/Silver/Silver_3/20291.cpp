// problem: 파일 정리
// id: 20291
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
  cin >> n;
  string s;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> s;
    auto loc = s.find('.');
    if (loc != string::npos) {
      mp[s.substr(loc + 1)] += 1;
    }
  }

  for (auto i : mp) {
    cout << i.first << ' ' << i.second << '\n';
  }

  return 0;
}
