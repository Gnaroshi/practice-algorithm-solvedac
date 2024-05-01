// problem: 행렬 제곱
// id: 10830
// tag:
// time taken:

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
using vl = vector<ll>;
using vll = vector<vl>;
const ll MD = 1000;

int n;
ll a, b;
vll v;

vll grm(vll a) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      a[i][j] %= MD;
  }
  return a;
}

vll ms(vll a, vll b) {
  vll ret(n);
  ll t;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      t = 0;
      for (int k = 0; k < n; k++)
        t += a[i][k] * b[k][j];
      ret[i].push_back(t);
    }
  }
  return ret;
}

vll fn(vll a, ll sq) {
  if (sq == 1) {
    return grm(a);
  }
  vll t = grm(fn(a, sq / 2));
  t = grm(ms(t, t));
  if (sq % 2 == 0)
    return t;
  return grm(ms(t, a));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> b;
  for (int i = 0; i < n; i++) {
    vl t;
    for (int j = 0; j < n; j++) {
      cin >> a;
      t.emplace_back(a);
    }
    v.emplace_back(t);
  }

  vll ans = fn(v, b);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cout << ans[i][j] << (j + 1 != n ? ' ' : '\n');

  return 0;
}
