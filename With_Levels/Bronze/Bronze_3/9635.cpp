// problem: Balloons Colors
// id: 9635
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
        int n, x, y;
        cin >> n >> x >> y;
        bool e = false, h = false;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (i == 0 && a == x)
                e = true;
            if (i == n - 1 && a == y)
                h = true;
        }
        if (e && h)
            cout << "BOTH";
        else if (e)
            cout << "EASY";
        else if (h)
            cout << "HARD";
        else
            cout << "OKAY";
        cout << '\n';
    }

    return 0;
}