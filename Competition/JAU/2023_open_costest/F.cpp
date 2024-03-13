// problem: F번 - 연산자 파티
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    ll nums[6];
    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> nums[i];
    ll x = 0;
    for (ll i = 1; i <= n; i++)
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