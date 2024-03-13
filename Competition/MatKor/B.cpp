#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, b;
    ll x_sum = 0;
    ll y_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x_sum += x;
        y_sum += y;
    }

    ll u;
    u = y_sum - b * n;

    if (u == 0)
    {
        cout << "EZPZ";
        return 0;
    }

    return 0;
}