// problem: 피보나치 수 6
// id: 11444
// tag: exponentiation_by_squaring
// background: d'Ocagne's identity
// F_(m+n) = F_(m-1)F_(n) + F_(m)F_(n+1)
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
using ll = long long;
const ll MD = 1000000007;

ll inp;
unordered_map<ll, ll> ump;

ll fibo(ll n) {
  if (ump.find(n) == ump.end()) {
    if (n % 2 == 1) {
      int a = fibo(n / 2);
      int b = fibo(n / 2 + 1);
      ump[n] = ((a % MD) * (a % MD) % MD + (b % MD) * (b % MD) % MD) % MD;
    } else {
      int a = fibo(n / 2);
      int b = fibo(n / 2 - 1);
      ump[n] = ((a % MD) * (a % MD + 2 * b % MD) % MD) % MD;
    }
  }
  return ump[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> inp;
  ump[0] = 0;
  ump[1] = ump[2] = 1;

  cout << fibo(inp);

  return 0;
}
