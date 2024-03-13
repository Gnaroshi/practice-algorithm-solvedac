// problem: Space Coconut Crab
// id: 22680
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int e, t, tt;
    while (true)
    {
        cin >> e;
        if (!e)
            break;
        int mn = 0x3f3f3f3f, iter, t;
        bool chk = false;
        for (iter = 1;; iter++)
            if (iter * iter * iter > e)
                break;
        for (int z = iter - 1; z >= 0; z--)
        {
            t = z * z * z;
            int y = int(sqrt(e - t));
            int x = e - y * y - t;
            mn = min(mn, x + y + z);
        }
        cout << mn << '\n';
    }

    return 0;
}