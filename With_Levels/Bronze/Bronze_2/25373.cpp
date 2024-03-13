// problem: 벼락치기
// id: 25373
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll t = 0, ans = 7;
    for (int i = 1; i <= 7; i++)
    {
        t += i;
        if (n <= t)
        {
            cout << i;
            return 0;
        }
    }
    n -= t;
    if (n % 7 != 0)
        ans++;
    cout << ans + n / 7;

    return 0;
}