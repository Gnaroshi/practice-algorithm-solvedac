// problem: Ballpark Estimate
// id: 17795
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
    if (n < 10)
        cout << n;
    else
    {
        ll a, b, t = n, dg = 1;
        ll f = 0;
        bool ch = false;
        while (t > 0)
        {
            t /= 10;
            if (t < 10 && t != 0)
                f = t;
            if (ch)
                dg *= 10;
            else
                ch = true;
        }
        a = (f + 1) * dg;
        b = (f)*dg;
        // cout << f << ' ' << dg << ' ' << a << ' ' << b << ' ';
        if (abs(a - n) <= abs(b - n))
            cout << a;
        else
            cout << b;
    }
    return 0;
}