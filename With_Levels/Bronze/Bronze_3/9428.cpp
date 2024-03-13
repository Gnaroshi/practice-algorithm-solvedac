// problem: Effective Infection Time
// id: 9428
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(4);
    int tc;
    cin >> tc;
    while (tc--)
    {
        double a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;
        d -= b;
        if (d)
        {
            ans += 0.5;
            d--;
            if (d)
                ans += d;
            ans += 1.0 / 12.0 * (c - 1);
        }
        else
        {
            ans += (0.5) / (13 - a) * (c - a);
        }
        cout << ans << '\n';
    }

    return 0;
}