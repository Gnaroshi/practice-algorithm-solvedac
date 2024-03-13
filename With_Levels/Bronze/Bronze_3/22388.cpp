// problem: 改元
// id: 22388
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int y, m, d;
    while (true)
    {
        bool isH = true;
        cin >> s;
        if (s == "#")
            break;
        cin >> y >> m >> d;
        if (y >= 31)
            if ((y == 31 && m > 4) || y > 31)
                isH = false;
        if (isH)
            cout << "HEISEI " << y << ' ' << m << ' ' << d << '\n';
        else
            cout << "? " << y - 30 << ' ' << m << ' ' << d << '\n';
    }

    return 0;
}