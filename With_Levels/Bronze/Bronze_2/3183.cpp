// problem: Dates
// id: 3183
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, m, y;
    while (true)
    {
        cin >> d >> m >> y;
        if (!d && !m && !y)
            break;
        bool chk = true;
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if (d < 1 || d > 31)
                chk = false;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d < 1 || d > 30)
                chk = false;
        }
        else if (m == 2)
        {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            {
                if (d < 1 || d > 29)
                    chk = false;
            }
            else
            {
                if (d < 1 || d > 28)
                    chk = false;
            }
        }
        else
            chk = false;
        if (chk)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }

    return 0;
}