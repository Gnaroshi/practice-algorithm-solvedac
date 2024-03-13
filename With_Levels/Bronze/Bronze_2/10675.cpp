// problem: Cow Routing
// id: 10675
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n, mn = 0x3f3f3f3f, r = -1;
    cin >> a >> b >> n;
    for (int i = 1; i <= n; i++)
    {
        int c, cr, t;
        bool ca = false, cb = false;
        cin >> c >> cr;
        for (int j = 0; j < cr; j++)
        {
            cin >> t;
            if (t == a)
                ca = true;
            else if (t == b && ca)
                cb = true;
        }
        if (ca && cb)
        {
            if (mn > c)
            {
                mn = c;
                r = i;
            }
        }
    }
    if (r != -1)
        cout << mn;
    else
        cout << -1;

    return 0;
}