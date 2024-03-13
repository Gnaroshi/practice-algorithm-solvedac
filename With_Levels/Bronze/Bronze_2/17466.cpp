// problem: N! mod P (1)
// id: 17466
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, p, ans = 1;
    cin >> n >> p;

    for (ll i = 1; i <= n; i++)
    {
        ans *= (i % p);
        ans %= p;
    }
    cout << ans;

    return 0;
}