#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MX 10001

int k, n;
int nums[MX];

bool sol(ll x)
{
    ll cur = 0;
    for (int i = 0; i < k; i++)
        cur += nums[i] / x;
    return cur >= n;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> k >> n;
    for (int i = 0; i < k; i++)
        cin >> nums[i];

    ll s, e;
    s = 1;
    e = INT_MAX;
    while (s < e)
    {
        ll mid = (s + e + 1) / 2;
        if (sol(mid))
            s = mid;
        else
            e = mid - 1;
    }
    cout << s << '\n';

    return 0;
}