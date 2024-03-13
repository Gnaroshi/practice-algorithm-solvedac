// problem: Milk and Honey
// id: 7133
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, dm, h, dh, n, c, b, mx = 0;
    cin >> m >> dm >> h >> dh >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> b;
        int tc = 0, tm = m, tb = 0, th = h;
        for (int j = c; j > 0; j--)
        {
            if (tm <= 0)
                break;
            tc += tm;
            tm -= dm;
        }
        for (int j = b; j > 0; j--)
        {
            if (th <= 0)
                break;
            tb += th;
            th -= dh;
        }
        mx += max(tc, tb);
    }
    cout << mx;

    return 0;
}