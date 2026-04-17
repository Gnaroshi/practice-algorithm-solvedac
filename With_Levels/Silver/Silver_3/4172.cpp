// problem: sqrt log sin
// id: 4172
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

  const int SZ = 1000001;
  const int MD = 1000000;
  int x;
  vi v(SZ, 0);

  v[0] = 1;
  for (int i = 1; i < SZ; i++) {
    v[i] = (v[int(i - sqrt(i))] % MD) + (v[int(log(i))] % MD) +
           (v[i * sin(i) * sin(i)] % MD);
    v[i] %= MD;
  }

  while (cin >> x && x != -1) {
    cout << v[x] << "\n";
  }

  return 0;
}
