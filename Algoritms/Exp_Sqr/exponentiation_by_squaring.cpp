#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

ll exp_sqr(ll a, ll b, ll md) {
  if (b == 1)
    return a % md;
  ll t = exp_sqr(a, b / 2, md) % md;
  t = t * t % md;
  if (b % 2 == 0)
    return t;
  return t * a % md;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll a, b, MD;
  cin >> a >> b >> MD;
  cout << exp_sqr(a, b, MD);

  return 0;
}
