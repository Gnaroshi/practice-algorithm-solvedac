// problem: ¿¿ (Large)
// id: 14607
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

const int tmx = 1001;
ll v[tmx] = {0};

ll fn(ll n) {
  if (n < tmx)
    return v[n];
  ll h = n / 2;
  ll t = fn(h);
  if (n % 2)
    return (h * (h + 1) + t + fn(h + 1));
  else
    return (h * h + 2 * t);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  v[2] = 1;
  v[3] = 3;
  for (int i = 4; i < tmx; i++) {
    int h = i / 2;
    if (i % 2) {
      v[i] = h * (h + 1) + v[h] + v[h + 1];
    } else {
      v[i] = h * h + v[h] * 2;
    }
  }

  ll n;
  cin >> n;
  cout << fn(n) << '\n';

  return 0;
}
