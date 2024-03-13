// problem: Ресторан
// id: 23738
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    for (auto i : s)
    {
        if (i == 'A' || i == 'K' || i == 'M' || i == 'O' || i == 'T')
            cout << char(tolower(i));
        else if (i == 'B')
            cout << "v";
        else if (i == 'E')
            cout << "ye";
        else if (i == 'H')
            cout << "n";
        else if (i == 'P')
            cout << "r";
        else if (i == 'C')
            cout << "s";
        else if (i == 'Y')
            cout << "u";
        else
            cout << "h";
    }

    return 0;
}