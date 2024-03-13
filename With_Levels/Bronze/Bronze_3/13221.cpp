// problem: Manhattan
// id: 13221
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n, x, y, d;
    int mnx, mny, mnd;
    mnd = 0x3f3f3f3f;

    cin >> a >> b >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        d = abs(a - x) + abs(b - y);
        if (mnd > d)
        {
            mnd = d;
            mnx = x;
            mny = y;
        }
    }
    cout << mnx << ' ' << mny;

    return 0;
}