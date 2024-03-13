// problem: Walking Boy
// id: 27593
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
        int n, bef = 0, t, cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t - bef >= 120)
                cnt += ((t - bef) / 120);
            bef = t;
        }
        t = 1440;
        if (t - bef >= 120)
            cnt += ((t - bef) / 120);
        if (cnt >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}