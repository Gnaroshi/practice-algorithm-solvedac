// problem: Judging Olympia
// id: 4909
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double ans = 0;
    while (true)
    {
        double t, mn, mx;
        mn = INT32_MAX;
        mx = -1;
        ans = 0;
        bool chk = true;
        for (int i = 0; i < 6; i++)
        {
            cin >> t;
            if (t != 0)
                chk = false;
            mn = min(mn, t);
            mx = max(mx, t);
            ans += t;
        }

        if (chk)
            break;
        cout << (ans - mn - mx) / 4 << '\n';
    }

    return 0;
}