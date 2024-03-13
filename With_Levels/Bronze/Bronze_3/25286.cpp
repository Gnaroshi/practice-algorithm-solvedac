// problem: 11월 11일
// id: 25286
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
        int y, m;
        cin >> y >> m;
        bool leap = ((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0 ? true : false;
        if (m == 1)
            cout << y - 1 << " 12 31";
        else
        {
            cout << y << " ";

            if (m == 3)
            {
                if (leap)
                    cout << "2 29";
                else
                    cout << "2 28";
            }
            else
            {
                if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11)
                    cout << m - 1 << " 31";
                else
                    cout << m - 1 << " 30";
            }
        }
        cout << '\n';
    }

    return 0;
}