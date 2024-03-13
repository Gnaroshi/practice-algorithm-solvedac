// problem: Stand on Zanzibar
// id: 11636
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
        int ans = 0, t, bef;
        cin >> t;
        bef = t;
        while (true)
        {
            cin >> t;
            if (!t)
                break;
            if (bef * 2 < t)
                ans += t - bef * 2;
            bef = t;
        }
        cout << ans << '\n';
    }

    return 0;
}