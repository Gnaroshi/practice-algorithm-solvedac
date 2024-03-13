// problem: Cat’s Age
// id: 25815
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y, m, ans = 0;
    cin >> y >> m;

    if (y)
    {
        ans += 15 * 12;
        y--;
        if (y)
        {
            ans += 9 * 12;
            y--;
            if (y)
            {
                ans += y * 4 * 12;
            }
            ans += m * 4;
            cout << ans / 12 << ' ' << ans % 12;
        }
        else
        {
            ans += m * 9;
            cout << ans / 12 << ' ' << ans % 12;
            return 0;
        }
    }
    else
    {
        ans = m * 15;
        cout << ans / 12 << ' ' << ans % 12;
        return 0;
    }

    return 0;
}