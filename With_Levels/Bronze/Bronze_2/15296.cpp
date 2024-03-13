// problem: Sum Squared Digits Function
// id: 15296
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ssd(ll b, ll n)
{
    ll ret = 0;
    while (n > 0)
    {
        ret += (n % b) * (n % b);
        n /= b;
    }
    return ret;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p;
    cin >> p;
    while (p--)
    {
        int k;
        ll b, n;
        cin >> k >> b >> n;
        cout << k << ' ' << ssd(b, n) << '\n';
    }

    return 0;
}