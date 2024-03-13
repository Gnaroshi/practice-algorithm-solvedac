// problem: 중간계 전쟁
// id: 4435
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    int g[6] = {1, 2, 3, 3, 4, 10};
    int s[7] = {1, 2, 2, 2, 3, 5, 10};
    for (int i = 1; i <= tc; i++)
    {
        cout << "Battle " << i << ": ";
        int ans = 0, t;
        for (int i = 0; i < 6; i++)
        {
            cin >> t;
            ans += t * g[i];
        }
        for (int i = 0; i < 7; i++)
        {
            cin >> t;
            ans -= t * s[i];
        }
        if (ans > 0)
            cout << "Good triumphs over Evil\n";
        else if (ans < 0)
            cout << "Evil eradicates all trace of Good\n";
        else
            cout << "No victor on this battle field\n";
    }

    return 0;
}