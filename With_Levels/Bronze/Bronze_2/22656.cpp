// problem: Princess' Gamble
// id: 22656
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, p;
    while (true)
    {
        cin >> n >> m >> p;
        if (n + m + p == 0)
            break;

        int s = 0, t, x = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> t;
            s += t;
            if (i == m)
                x = t;
        }
        if (x)
            cout << (100 - p) * s / x << '\n';
        else
            cout << x << '\n';
    }

    return 0;
}