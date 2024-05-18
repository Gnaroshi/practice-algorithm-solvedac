// problem: 활자
// id: 1951
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
const ll MD = 1234567;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, l, ans = 0, mul = 9;
  cin >> n;
  if (n < 10) {
    cout << n;
    return 0;
  }

  string s = to_string(n);
  l = s.length();

  for (int i = 1; i < l; i++) {
    ans += mul * i;
    ans %= MD;
    mul *= 10;
  }

  mul /= 9;
  ans += ((max(s[0] - '0' - 1, 0)) * mul * l) % MD;

  ans += l * (stol(s.substr(1)) + 1);

  cout << ans % MD << '\n';

  return 0;
}
