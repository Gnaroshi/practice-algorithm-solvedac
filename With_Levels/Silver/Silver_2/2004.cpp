// problem: 조합 0의 개수
// id: 2004
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
using ll = long long;
using pll = pair<ll, ll>;

// n!/(n-m)!m!
ll n, m, ans;
pll nf, nmf, mf;

pll fn(ll t) {
  ll tcnt = 0, fcnt = 0;
  for (ll i = 2; i <= t; i *= 2)
    tcnt += t / i;
  for (ll i = 5; i <= t; i *= 5)
    fcnt += t / i;
  return {tcnt, fcnt};
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  nf = fn(n), nmf = fn(n - m), mf = fn(m);
  cout << min(nf.first - nmf.first - mf.first,
              nf.second - nmf.second - mf.second)
       << '\n';

  return 0;
}
