// problem: Big Number
// id: 26495
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        int c = s[i] - '0';

        if (c == 0 || c == 2 || c == 3 || c == 5 || c == 6 || c == 7 || c == 8 || c == 9)
        {
            for (int j = 0; j < 4; j++)
                cout << c;
        }
        else if (c == 1)
            cout << "   1";
        else if (c == 4)
            cout << "4  4";
        cout << '\n';

        if (c == 0 || c == 4 || c == 8 || c == 9)
            cout << c << "  " << c;
        else if (c == 1 || c == 2 || c == 3 || c == 7)
            cout << "   " << c;
        else
            cout << c;
        cout << '\n';

        if (c == 0)
            cout << c << "  " << c;
        else if (c == 1 || c == 7)
            cout << "   " << c;
        else
            for (int j = 0; j < 4; j++)
                cout << c;
        cout << '\n';

        if (c == 0)
            cout << c << "  " << c;
        else if (c == 1 || c == 3 || c == 4 || c == 5 || c == 7 || c == 9)
            cout << "   " << c;
        else if (c == 2)
            cout << 2;
        else
            cout << c << "  " << c;
        cout << '\n';
        if (c == 1 || c == 4 || c == 7 || c == 9)
            cout << "   " << c;
        else
            for (int j = 0; j < 4; j++)
                cout << c;

        cout << "\n\n";
    }

    return 0;
}