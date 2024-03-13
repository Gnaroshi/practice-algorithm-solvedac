// problem: N결수
// id: 27965
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    int mul = 10;
    for (int i = 1; i <= n; i++)
    {
        int mul = 1;
        int t = i;
        while (t > 0)
        {
            t /= 10;
            mul *= 10;
        }
        // cout << i << ' ' << mul << '\n';
        ans *= mul;
        ans %= k;
        ans += i;
        ans %= k;
    }
    cout << ans;

    return 0;
}