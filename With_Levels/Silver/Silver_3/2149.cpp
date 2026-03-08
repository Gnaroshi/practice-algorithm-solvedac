// problem: 암호 해독
// id: 2149
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
using vc = vector<char>;
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

  string a, b;
  cin >> a >> b;
  map<pair<char, int>, vc> mp;
  int al = a.length(), bl = b.length(), l = bl / al;
  for (int i = 0; i < al; i++) {
    vc t;
    mp.insert({{a[i], i}, t});
  }

  auto idx = mp.begin();
  for (int i = 0; i < al; i++) {
    int st = i * l, ed = (i + 1) * l;
    for (int j = st; j < ed; j++) {
      idx->second.push_back(b[j]);
    }
    idx++;
  }

  for (int i = 0; i < l; i++) {
    for (int j = 0; j < al; j++) {
      for (auto k : mp) {
        if (k.first.second == j) {
          cout << k.second[i];
        }
      }
    }
  }
  cout << '\n';

  return 0;
}
