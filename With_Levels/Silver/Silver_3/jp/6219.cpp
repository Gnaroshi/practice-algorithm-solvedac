// problem: 소수의 자격
// id: 6219
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

  const int SZ = 4000001;
  vi p;
  vb isp(SZ, true);

  for (int i = 2; i < SZ; i++) {
    if (isp[i]) {
      p.push_back(i);
    }
    for (auto j : p) {
      if (i * j >= SZ) {
        break;
      }
      isp[i * j] = false;
      if (i % j == 0) {
        break;
      }
    }
  }

  int a, b, c, cnt = 0;
  cin >> a >> b >> c;
  string sc = to_string(c);
  for (int i = a; i <= b; i++) {
    string s = to_string(i);
    if (s.find(sc) != string::npos) {
      if (isp[i]) {
        cnt++;
      }
    }
  }

  cout << cnt << "\n";

  return 0;
}
