// problem: X번 - 집에선 안돼잉
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, t, s;
    cin >> n >> m >> t >> s;
    ll a = max(0LL, (n / 8 + ((n % 8) ? 0 : -1))) * s + n;
    ll b = max(0LL, (m / 8 + ((m % 8) ? 0 : -1))) * (s + t * 2) + m + t;
    if (a < b)
        cout << "Zip\n"
             << a;
    else if (a > b)
        cout << "Dok\n"
             << b;

    return 0;
}