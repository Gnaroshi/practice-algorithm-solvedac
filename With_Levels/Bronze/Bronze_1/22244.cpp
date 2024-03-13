// problem: Cataloguing numbers
// id: 22244
// time taken:
#include <bits/stdc++.h>
using namespace std;

int mth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool fn(string s)
{
    int d = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[2] - '0') * 10 + (s[3] - '0');
    int y = (s[4] - '0') * 100 + (s[5] - '0') * 10 + (s[6] - '0');
    int at = s[7] - '0', c = 0;

    if (y < 600)
        y += 2000;
    else
        y += 1000;

    if ((y % 4 == 0 && y % 100) || y % 400 == 0)
        mth[2] = 29;

    if (d == 0 || m == 0)
        return false;
    if (d > mth[m])
        return false;
    if (at == 1 || at == 6 || at == 9)
        ;
    else
        return false;

    for (int i = 0; i < 8; i++)
        c += (s[i] - '0') * (s[i] - '0');
    if (c % 7 != s[8] - '0')
        return false;
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        cout << fn(s) << '\n';
    }

    return 0;
}