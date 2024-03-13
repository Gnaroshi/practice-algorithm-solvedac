#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d, h, m;
    cin >> d >> h >> m;
    d -= 11;
    h -= 11;
    m -= 11;
    if (m < 0)
    {
        m += 60;
        h--;
    }
    if (h < 0)
    {
        h += 24;
        d--;
    }
    // cout << d << ' ' << h << ' ' << m << '\n';
    int ans = d * 24 * 60 + h * 60 + m;
    if (ans < 0)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}