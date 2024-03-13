// problem: 심준의 병역판정검사
// id: 25285
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
        double a, b;
        cin >> a >> b;
        b = b / (a / 100) / (a / 100);
        if (a < 141)
            cout << 6;
        else if (a < 146 && a >= 141)
            cout << 5;
        else if (a < 159 && a >= 146)
            cout << 4;
        else if (a < 161 && a >= 159)
        {
            if (b < 35 && b >= 16)
                cout << 3;
            else if (b < 16 || b >= 35)
                cout << 4;
        }
        else if (a < 204 && a >= 161)
        {
            if (b >= 20 && b < 25)
                cout << 1;
            else if ((b < 20 && b >= 18.5) || (b < 30 && b >= 25))
                cout << 2;
            else if ((b < 18.5 && b >= 16) || (b < 35 && b >= 30))
                cout << 3;
            else
                cout << 4;
        }
        else
            cout << 4;
        cout << '\n';
    }

    return 0;
}