// problem: 연산자 파티
// id: 27738
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;
ll nums[6];

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> nums[i];

    ll x = 0, t = n - (n % nums[5]) + 1;
    for (ll i = t; i <= n; i++)
    {
        if (i % nums[0] == 0)
            x += i;

        if (i % nums[1] == 0)
            x %= i;

        if (i % nums[2] == 0)
            x = x & i;

        if (i % nums[3] == 0)
            x = x ^ i;

        if (i % nums[4] == 0)
            x = x | i;

        if (i % nums[5] == 0)
            x = x >> i;
    }
    cout << x;

    return 0;
}