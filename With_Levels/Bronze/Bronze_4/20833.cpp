// problem: Kuber
// id: 20833
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll ans = 0;
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans += i * i * i;
    }
    cout << ans << '\n';

    return 0;
}