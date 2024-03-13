// problem: Exploring Caves
// id: 22815
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int cx = 0, cy = 0, dx, dy, mx = 0, my = 0, mxd = 0;
        while (true)
        {
            cin >> dx >> dy;
            if (dx == 0 && dy == 0)
                break;
            cx += dx, cy += dy;
            if (cx * cx + cy * cy > mxd)
            {
                mx = cx, my = cy;
                mxd = cx * cx + cy * cy;
            }
            else if (cx * cx + cy * cy == mxd)
            {
                if (cx > mx)
                    mx = cx, my = cy;
            }
        }
        cout << mx << ' ' << my << '\n';
    }

    return 0;
}