// problem: 시간과 날짜
// id: 25024
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
        int x, y;
        cin >> x >> y;
        if (x < 24 && y < 60)
            cout << "Yes ";
        else
            cout << "No ";
        if (x < 13 && x != 0 && y < 32)
        {
            if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
            {
                if (y != 0 && y < 32)
                    cout << "Yes";
                else
                    cout << "No";
            }
            else if (x == 2)
            {
                if (y != 0 && y < 30)
                    cout << "Yes";
                else
                    cout << "No";
            }
            else
            {
                if (y != 0 && y < 31)
                    cout << "Yes";
                else
                    cout << "No";
            }
        }
        else
            cout << "No";
        cout << '\n';
    }

    return 0;
}