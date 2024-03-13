// problem: Medal Ranking
// id: 25933
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
        int u[3], r[3], t = 0;
        bool a, b;
        a = b = false;
        for (int i = 0; i < 3; i++)
            cin >> u[i];
        for (int i = 0; i < 3; i++)
            cin >> r[i];

        for (int i = 0; i < 3; i++)
        {
            t += u[i];
            t -= r[i];
        }
        a = t > 0;
        for (int i = 0; i < 3; i++)
        {
            if (u[i] > r[i])
            {
                b = true;
                break;
            }
            else if (u[i] < r[i])
                break;
        }
        for (int i = 0; i < 3; i++)
            cout << u[i] << ' ';
        for (int i = 0; i < 3; i++)
            cout << r[i] << ' ';
        cout << '\n';
        if (a && b)
            cout << "both\n\n";
        else if (a)
            cout << "count\n\n";
        else if (b)
            cout << "color\n\n";
        else
            cout << "none\n\n";
    }

    return 0;
}